import 'dart:async';

import 'package:ar_ctu/models/streetview.dart';
import 'package:ar_ctu/repositories/firestore_repository.dart';
import 'package:ar_ctu/utils/parseError.dart';
import 'package:bloc/bloc.dart';
import 'package:equatable/equatable.dart';

part 'room_details_event.dart';
part 'room_details_state.dart';

class RoomDetailsBloc extends Bloc<RoomDetailsEvent, RoomDetailsState> {
  RoomDetailsBloc() : super(RoomDetailsState.empty());
  final FirestoreRepository firestoreRepository = FirestoreRepository();
  @override
  Stream<RoomDetailsState> mapEventToState(
    RoomDetailsEvent event,
  ) async* {
    if (event is GetRoomDetails) {
      yield* _getRoomDetails(event);
    }
  }

  Stream<RoomDetailsState> _getRoomDetails(GetRoomDetails event) async* {
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
}
