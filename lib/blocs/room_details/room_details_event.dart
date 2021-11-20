part of 'room_details_bloc.dart';

abstract class RoomDetailsEvent {}

class GetRoomDetails extends RoomDetailsEvent {
  final StreetView streetView;

  GetRoomDetails({required this.streetView});
}
