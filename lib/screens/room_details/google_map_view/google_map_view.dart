import 'dart:async';

import 'package:ar_ctu/models/streetview.dart';
import 'package:ar_ctu/screens/unity_view/unity_view.dart';
import 'package:ar_ctu/utils/app_assets.dart';
import 'package:ar_ctu/utils/app_routes.dart';
import 'package:ar_ctu/utils/app_styles.dart';
import 'package:ar_ctu/utils/map_helper.dart';
import 'package:flutter/material.dart';
import 'package:google_maps_flutter/google_maps_flutter.dart';
import 'package:flutter/services.dart' show rootBundle;

class GoogleMapView extends StatefulWidget {
  final RoomDetails roomDetails;

  const GoogleMapView({Key? key, required this.roomDetails}) : super(key: key);
  @override
  _GoogleMapViewState createState() => _GoogleMapViewState();
}

class _GoogleMapViewState extends State<GoogleMapView> {
  double get getRoomLat => double.parse(widget.roomDetails.lat!);
  double get getRoomLng => double.parse(widget.roomDetails.lng!);
  Set<Marker> markers = <Marker>{};
  Completer<GoogleMapController> _controller = Completer();

  _setMapStyle(GoogleMapController controller) async {
    var mapStyle = await rootBundle.loadString(AppAssets.aubergine);

    await controller.setMapStyle(mapStyle);
  }

  @override
  void initState() {
    _initMarker();
    super.initState();
  }

  _initMarker() async {
    var marker = Marker(
        markerId: MarkerId(widget.roomDetails.id!),
        position: LatLng(getRoomLat, getRoomLng),
        infoWindow: InfoWindow(title: "${widget.roomDetails.name}"),
        icon: await MapHelper.getClusterBitmap(220,
            imageUrl: "${widget.roomDetails.thumbnail!}"));
    markers.add(marker);
    setState(() {});
  }

  @override
  Widget build(BuildContext context) {
    return new Scaffold(
      body: GoogleMap(
        compassEnabled: false,
        zoomControlsEnabled: false,
        markers: markers,
        initialCameraPosition: CameraPosition(
          target: LatLng(getRoomLat, getRoomLng),
          zoom: 14.4746,
        ),
        onMapCreated: (GoogleMapController controller) async {
          _controller.complete(controller);
          await _setMapStyle(controller);
        },
      ),
      floatingActionButtonLocation: FloatingActionButtonLocation.centerFloat,
      floatingActionButton: FloatingActionButton.extended(
        onPressed: () {
          AppRoutes.push(
              context,
              UnityView(
                image360s: widget.roomDetails.image360s!,
              ));
        },
        label: Text(
          'View in AR',
          style: AppStyles.textSize16(color: Colors.white),
        ),
      ),
    );
  }
}
