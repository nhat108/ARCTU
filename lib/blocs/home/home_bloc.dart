import 'dart:async';

import 'package:ar_ctu/models/streetview.dart';
import 'package:ar_ctu/repositories/firestore_repository.dart';
import 'package:bloc/bloc.dart';
import 'package:equatable/equatable.dart';

part 'home_event.dart';
part 'home_state.dart';

class HomeBloc extends Bloc<HomeEvent, HomeState> {
  HomeBloc() : super(HomeInitial());
  final FirestoreRepository firestoreRepository = FirestoreRepository();

  @override
  Stream<HomeState> mapEventToState(
    HomeEvent event,
  ) async* {}

  Stream<List<StreetView>> getListStreetViews() {
    return firestoreRepository.getStreetViews();
  }
}
