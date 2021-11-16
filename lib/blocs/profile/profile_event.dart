part of 'profile_bloc.dart';

abstract class ProfileEvent {}

class GetProfile extends ProfileEvent {
  final String userId;

  GetProfile({required this.userId});
}

class UpdateProfile extends ProfileEvent {
  final String fullName;
  final File? image;
  final String id;
  final VoidCallback onSuccess;
  final Function(String) onError;

  UpdateProfile({
    required this.fullName,
    this.image,
    required this.onError,
    required this.onSuccess,
    required this.id,
  });
}
