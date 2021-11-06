import 'package:equatable/equatable.dart';

class StreetView extends Equatable {
  final String? name;
  final String? id;
  final String? lat;
  final String? lng;
  final String? thumbnail;
  final String? description;

  StreetView(
      {this.name,
      this.id,
      this.lat,
      this.lng,
      this.thumbnail,
      this.description});

  factory StreetView.fromJson(Map<String, dynamic> json) {
    return StreetView(
      description: json['description'],
      id: json['id'],
      lat: json['lat'],
      lng: json['lng'],
      name: json['name'],
      thumbnail: json['thumbnail'],
    );
  }
  @override
  List<Object?> get props => [
        this.name,
        this.id,
        this.lat,
        this.lng,
        this.thumbnail,
        this.description
      ];
}

class RoomDetails extends Equatable {
  final List<String>? image360s;
  final String? name;
  final String? id;
  final String? lat;
  final String? lng;
  final String? thumbnail;
  final String? description;

  RoomDetails({
    this.image360s,
    this.name,
    this.description,
    this.id,
    this.lat,
    this.lng,
    this.thumbnail,
  });
  factory RoomDetails.fromJson(Map<String, dynamic> json) {
    return RoomDetails(
      image360s: (json['image360s'] as List).map((e) => e.toString()).toList(),
      description: json['description'],
      id: json['id'],
      lat: json['lat'],
      lng: json['lng'],
      name: json['name'],
      thumbnail: json['thumbnail'],
    );
  }
  @override
  List<Object?> get props => [
        this.image360s,
        this.name,
        this.description,
        this.id,
        this.lat,
        this.lng,
        this.thumbnail,
      ];
}
