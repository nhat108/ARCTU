part of 'home_bloc.dart';

abstract class HomeEvent {}

class GetRoomDetails extends HomeEvent {
  final StreetView streetView;

  GetRoomDetails({required this.streetView});
}

class SavePlace extends HomeEvent {
  final String placeId;

  SavePlace({required this.placeId});
}
