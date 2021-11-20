part of 'room_details_bloc.dart';

class RoomDetailsState extends Equatable {
  final bool? getRoomDetailsLoading;
  final String? getRoomDetailsError;

  final RoomDetails? roomDetails;

  RoomDetailsState(
      {this.getRoomDetailsLoading, this.getRoomDetailsError, this.roomDetails});
  factory RoomDetailsState.empty() {
    return RoomDetailsState(
      getRoomDetailsError: '',
      getRoomDetailsLoading: false,
      roomDetails: null,
    );
  }

  RoomDetailsState copyWith({
    final bool? getRoomDetailsLoading,
    final String? getRoomDetailsError,
    final RoomDetails? roomDetails,
  }) {
    return RoomDetailsState(
      getRoomDetailsError: getRoomDetailsError ?? this.getRoomDetailsError,
      getRoomDetailsLoading:
          getRoomDetailsLoading ?? this.getRoomDetailsLoading,
      roomDetails: roomDetails ?? this.roomDetails,
    );
  }

  @override
  List<Object?> get props =>
      [this.getRoomDetailsLoading, this.getRoomDetailsError, this.roomDetails];
}
