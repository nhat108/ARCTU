import 'package:ar_ctu/blocs/home/home_bloc.dart';
import 'package:ar_ctu/blocs/room_details/room_details_bloc.dart';
import 'package:ar_ctu/models/streetview.dart';
import 'package:ar_ctu/screens/room_details/room_appbar.dart';
import 'package:ar_ctu/screens/room_details/slide_photo.dart';
import 'package:ar_ctu/utils/app_colors.dart';
import 'package:ar_ctu/widgets/error_widget.dart';
import 'package:ar_ctu/widgets/loading_widget.dart';
import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';

import 'map_view.dart';
import 'room_details.dart';
import 'view_ar_bar.dart';

class RoomDetailsPage extends StatefulWidget {
  final StreetView streetView;
  const RoomDetailsPage({Key? key, required this.streetView}) : super(key: key);

  @override
  _RoomDetailsPageState createState() => _RoomDetailsPageState();
}

class _RoomDetailsPageState extends State<RoomDetailsPage> {
  @override
  void initState() {
    BlocProvider.of<RoomDetailsBloc>(context)
        .add(GetRoomDetails(streetView: widget.streetView));
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: AppColors.AliceBlue,
      body: SafeArea(
        child: SingleChildScrollView(
          child: Column(
            children: [
              RoomAppBar(),
              BlocBuilder<RoomDetailsBloc, RoomDetailsState>(
                  builder: (context, state) {
                if (state.getRoomDetailsLoading!) {
                  return LoadingWidget();
                }
                if (state.getRoomDetailsError!.isNotEmpty) {
                  return ErrorStateWidget(
                      error: '${state.getRoomDetailsError}');
                }
                if (state.roomDetails != null) {
                  return Column(
                    children: [
                      SlidePhoto(
                        photos: state.roomDetails!.image360s!,
                      ),
                      RoomDetail(
                        room: state.roomDetails!,
                      ),
                      MapView(
                        roomDetails: state.roomDetails!,
                      ),
                      ViewArBar(
                        image360s: state.roomDetails!.image360s!,
                      ),
                    ],
                  );
                }
                return Container();
              }),
            ],
          ),
        ),
      ),
    );
  }
}
