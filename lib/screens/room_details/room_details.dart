import 'package:ar_ctu/blocs/home/home_bloc.dart';
import 'package:ar_ctu/models/streetview.dart';
import 'package:ar_ctu/screens/auth/get_started_page.dart';
import 'package:ar_ctu/utils/app_colors.dart';
import 'package:ar_ctu/utils/app_routes.dart';
import 'package:ar_ctu/utils/app_styles.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';

class RoomDetail extends StatelessWidget {
  final RoomDetails room;
  const RoomDetail({Key? key, required this.room}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Container(
      padding: EdgeInsets.symmetric(horizontal: 20, vertical: 20),
      decoration: BoxDecoration(
        color: Colors.white,
        borderRadius: BorderRadius.circular(25),
        boxShadow: [
          BoxShadow(
            color: Colors.grey[300]!.withOpacity(0.3),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 0), // changes position of shadow
          ),
        ],
      ),
      margin: EdgeInsets.symmetric(horizontal: 25, vertical: 20),
      child: Column(
        children: [
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Text(
                    "${room.name}",
                    style: AppStyles.textSize16(),
                  ),
                  const SizedBox(
                    height: 6,
                  ),
                  Text(
                    "Square: 400m2",
                    style: AppStyles.textSize12(
                      color: AppColors.CarnationPink,
                    ),
                  )
                ],
              ),
              GestureDetector(
                onTap: () {
                  if (BlocProvider.of<HomeBloc>(context).isLogined) {
                    BlocProvider.of<HomeBloc>(context)
                        .add(SavePlace(placeId: room.id!));
                  } else {
                    AppRoutes.push(context, SignUpPage());
                  }
                },
                child: StreamBuilder<DocumentSnapshot<Map<String, dynamic>>>(
                  stream: BlocProvider.of<HomeBloc>(context)
                      .isFavourite(placeId: room.id!),
                  builder: (context, snapshot) {
                    if (snapshot.hasData && snapshot.data!.exists) {
                      return Container(
                        decoration: BoxDecoration(
                          color: AppColors.CarnationPink,
                          shape: BoxShape.circle,
                        ),
                        width: 35,
                        height: 35,
                        child: Icon(
                          Icons.favorite,
                          color: Colors.white,
                          size: 14,
                        ),
                      );
                    }
                    return Container(
                      decoration: BoxDecoration(
                        color: Colors.black,
                        shape: BoxShape.circle,
                      ),
                      width: 35,
                      height: 35,
                      child: Icon(
                        Icons.favorite,
                        color: Colors.white,
                        size: 14,
                      ),
                    );
                  },
                ),
              ),
            ],
          ),
          const SizedBox(
            height: 10,
          ),
          Text(
            "Owning a apartment make you feel beautiful and it is something everyone dream",
            style: AppStyles.textSize12(
              color: AppColors.CarnationPink,
            ),
          ),
        ],
      ),
    );
  }
}
