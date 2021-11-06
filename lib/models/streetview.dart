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
