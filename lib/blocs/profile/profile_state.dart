part of 'profile_bloc.dart';

class ProfileState extends Equatable {
  final bool? getProfileLoading;
  final String? getProfileError;
  final Profile? profile;

  final bool? updateProfileLoading;

  ProfileState(
      {this.getProfileLoading,
      this.getProfileError,
      this.profile,
      this.updateProfileLoading});

  factory ProfileState.empty() {
    return ProfileState(
      getProfileError: '',
      getProfileLoading: false,
      profile: null,
      updateProfileLoading: false,
    );
  }

  ProfileState copyWith({
    final bool? getProfileLoading,
    final String? getProfileError,
    final Profile? profile,
    final bool? updateProfileLoading,
  }) {
    return ProfileState(
      getProfileError: getProfileError ?? this.getProfileError,
      getProfileLoading: getProfileLoading ?? this.getProfileLoading,
      profile: profile ?? this.profile,
      updateProfileLoading: updateProfileLoading ?? this.updateProfileLoading,
    );
  }

  @override
  List<Object?> get props => [
        this.getProfileLoading,
        this.getProfileError,
        this.profile,
        this.updateProfileLoading
      ];
}
