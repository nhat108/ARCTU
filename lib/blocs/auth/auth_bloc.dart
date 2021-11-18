import 'dart:async';
import 'dart:io';

import 'package:ar_ctu/blocs/profile/profile_bloc.dart';
import 'package:ar_ctu/repositories/auth_repository.dart';
import 'package:ar_ctu/repositories/firestore_repository.dart';
import 'package:ar_ctu/utils/parseError.dart';
import 'package:bloc/bloc.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:meta/meta.dart';
import 'package:equatable/equatable.dart';
part 'auth_event.dart';
part 'auth_state.dart';

class AuthBloc extends Bloc<AuthEvent, AuthState> {
  AuthBloc({required this.profileBloc}) : super(AuthState.empty());
  final AuthRepository authRepository = AuthRepository();
  final ProfileBloc profileBloc;
  final FirestoreRepository firestoreRepository = FirestoreRepository();
  @override
  Stream<AuthState> mapEventToState(
    AuthEvent event,
  ) async* {
    if (event is CheckEmailExisted) {
      yield* _getCheckEmailExisted(event);
    } else if (event is Login) {
      yield* _login(event);
    } else if (event is SignUp) {
      yield* _signUp(event);
    } else if (event is GetStarted) {
      yield* _getStarted();
    } else if (event is Logout) {
      yield* _logout();
    }
  }

  Stream<AuthState> _logout() async* {
    await authRepository.logout();
  }

  Stream<AuthState> _getStarted() async* {
    try {
      User? user = authRepository.auth.currentUser;
      if (user != null) {
        profileBloc.add(GetProfile(userId: user.email!));
      }
    } catch (e) {
      ParseError error = ParseError.fromJson(e);
      print('error: ${error.message}');
    }
  }

  Stream<User?> authStateChanges() {
    return authRepository.authStateChanges();
  }

  Stream<AuthState> _getCheckEmailExisted(CheckEmailExisted event) async* {
    try {
      yield state.copyWith(
        isAuthLoading: true,
      );
      bool isExisted =
          await authRepository.checkEmailIsRegistered(email: event.email);
      event.onSuccess(isExisted);
      yield state.copyWith(
        isAuthLoading: false,
      );
    } catch (e) {
      ParseError error = ParseError.fromJson(e);
      yield state.copyWith(
        isAuthLoading: false,
      );
      event.onError(error.message);
    }
  }

  Stream<AuthState> _login(Login event) async* {
    try {
      yield state.copyWith(
        isAuthLoading: true,
      );
      await authRepository.login(email: event.email, password: event.password);
      event.onSuccess();
      state.copyWith(
        isAuthLoading: false,
      );
    } catch (e) {
      ParseError error = ParseError.fromJson(e);
      yield state.copyWith(isAuthLoading: false);
      event.onError(error.message);
    }
  }

  Stream<AuthState> _signUp(SignUp event) async* {
    try {
      yield state.copyWith(
        isAuthLoading: true,
      );
      String imageUrl = '';
      if (event.image != null) {
        imageUrl = await firestoreRepository.upLoadImage(
            path: 'users/${event.email}', file: event.image!);
      }
      await authRepository.signUp(
        fullName: event.fullName,
        email: event.email,
        password: event.password,
        imageUrl: imageUrl,
      );

      event.onSuccess();
      yield state.copyWith(
        isAuthLoading: false,
      );
    } catch (e) {
      ParseError error = ParseError.fromJson(e);
      yield state.copyWith(
        isAuthLoading: false,
      );
      event.onError(error.message);
    }
  }
}
