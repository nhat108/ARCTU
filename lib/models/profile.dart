import 'package:equatable/equatable.dart';

class Profile extends Equatable {
  final String? name;
  final String? email;
  final String? avatar;

  Profile({this.name, this.email, this.avatar});

  factory Profile.fromJson(Map<String, dynamic> json) {
    return Profile(
        avatar: json['avatar'], email: json['email'], name: json['fullName']);
  }
  @override
  List<Object?> get props => [this.name, this.email, this.avatar];
}
