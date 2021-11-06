import 'dart:async';

import 'package:ar_ctu/models/streetview.dart';
import 'package:ar_ctu/repositories/firestore_repository.dart';
import 'package:ar_ctu/utils/parseError.dart';
import 'package:bloc/bloc.dart';
import 'package:equatable/equatable.dart';

part 'home_event.dart';
part 'home_state.dart';

class HomeBloc extends Bloc<HomeEvent, HomeState> {
  HomeBloc() : super(HomeState.empty());
  final FirestoreRepository firestoreRepository = FirestoreRepository();

  @override
  Stream<HomeState> mapEventToState(
    HomeEvent event,
  ) async* {
    if (event is GetRoomDetails) {
      yield* getRoomDetails(event);
    }
  }

  Stream<HomeState> getRoomDetails(GetRoomDetails event) async* {
    try {
      yield state.copyWith(
        getRoomDetailsLoading: true,
        getRoomDetailsError: '',
      );
      final image360s =
          await firestoreRepository.getImage360(id: event.streetView.id!);
      yield state.copyWith(
          getRoomDetailsLoading: false,
          roomDetails: RoomDetails(
            image360s: image360s,
            description: event.streetView.description,
            id: event.streetView.id,
            lat: event.streetView.lat,
            lng: event.streetView.lng,
            name: event.streetView.name,
            thumbnail: event.streetView.thumbnail,
          ));
    } catch (e) {
      ParseError error = ParseError.fromJson(e);
      yield state.copyWith(
          getRoomDetailsError: error.message, getRoomDetailsLoading: false);
    }
  }

  Stream<List<StreetView>> getListStreetViews() {
    return firestoreRepository.getStreetViews();
  }
}
