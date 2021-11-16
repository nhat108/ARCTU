import 'dart:async';
import 'dart:io';

import 'package:ar_ctu/models/profile.dart';
import 'package:ar_ctu/repositories/firestore_repository.dart';
import 'package:ar_ctu/utils/parseError.dart';
import 'package:bloc/bloc.dart';
import 'package:equatable/equatable.dart';
import 'package:flutter/material.dart';

part 'profile_event.dart';
part 'profile_state.dart';

class ProfileBloc extends Bloc<ProfileEvent, ProfileState> {
  ProfileBloc() : super(ProfileState.empty());
  final FirestoreRepository firestoreRepository = FirestoreRepository();
  @override
  Stream<ProfileState> mapEventToState(
    ProfileEvent event,
  ) async* {
    if (event is GetProfile) {
      yield* _getProfile(event);
    } else if (event is UpdateProfile) {
      yield* _updateProfile(event);
    }
  }

  Stream<ProfileState> _getProfile(GetProfile event) async* {
    try {
      yield state.copyWith(
        getProfileError: '',
        getProfileLoading: true,
      );
      final profile = await firestoreRepository.getProfile(event.userId);
      yield state.copyWith(
        getProfileLoading: false,
        profile: profile,
      );
    } catch (e) {
      ParseError error = ParseError.fromJson(e);
      yield state.copyWith(
        getProfileLoading: false,
        getProfileError: error.message,
      );
    }
  }

  Stream<ProfileState> _updateProfile(UpdateProfile event) async* {
    try {
      yield state.copyWith(updateProfileLoading: true);
      String imageUrl = '';
      if (event.image != null) {
        imageUrl = await firestoreRepository.upLoadImage(
            path: 'users/${event.id}', file: event.image!);
      }
      await firestoreRepository.updateProfile(
        id: event.id,
        data: imageUrl.isNotEmpty
            ? {
                'fullName': event.fullName,
                'avatar': imageUrl,
              }
            : {
                'fullName': event.fullName,
              },
      );
      yield state.copyWith(updateProfileLoading: false);
      add(GetProfile(userId: event.id));
    } catch (e) {
      ParseError error = ParseError.fromJson(e);
      event.onError(error.message);
      yield state.copyWith(updateProfileLoading: false);
    }
  }
}
