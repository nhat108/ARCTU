part of 'home_bloc.dart';

abstract class HomeEvent {}

class SavePlace extends HomeEvent {
  final String placeId;

  SavePlace({required this.placeId});
}

class SearchPlace extends HomeEvent {
  final String query;

  SearchPlace({required this.query});
}
