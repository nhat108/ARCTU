part of 'home_bloc.dart';

class HomeState extends Equatable {
  final bool? getRoomDetailsLoading;
  final String? getRoomDetailsError;

  final RoomDetails? roomDetails;

  HomeState(
      {this.getRoomDetailsLoading, this.getRoomDetailsError, this.roomDetails});
  factory HomeState.empty() {
    return HomeState(
      getRoomDetailsError: '',
      getRoomDetailsLoading: false,
      roomDetails: null,
    );
  }

  HomeState copyWith({
    final bool? getRoomDetailsLoading,
    final String? getRoomDetailsError,
    final RoomDetails? roomDetails,
  }) {
    return HomeState(
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
