import 'package:ar_ctu/blocs/auth/auth_bloc.dart';
import 'package:ar_ctu/blocs/home/home_bloc.dart';
import 'package:ar_ctu/models/streetview.dart';
import 'package:ar_ctu/screens/auth/get_started_page.dart';
import 'package:ar_ctu/screens/list_recommended/list_recommended_page.dart';
import 'package:ar_ctu/screens/room_details/room_details_page.dart';
import 'package:ar_ctu/utils/app_colors.dart';
import 'package:ar_ctu/utils/app_routes.dart';
import 'package:ar_ctu/utils/app_styles.dart';
import 'package:ar_ctu/widgets/cache_image_widget.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';

class Recommended extends StatelessWidget {
  const Recommended({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Container(
      margin: EdgeInsets.symmetric(horizontal: 25),
      child: Column(
        children: [
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              Text(
                "Recommended",
                style: AppStyles.textSizeCustom(
                  size: 18,
                  fontWeight: FontWeight.w700,
                ),
              ),
              GestureDetector(
                onTap: () {
                  AppRoutes.push(context, ListRecommendedPage());
                },
                child: Text(
                  "See all",
                  style: AppStyles.textSize14().copyWith(
                    decoration: TextDecoration.underline,
                  ),
                ),
              ),
            ],
          ),
          const SizedBox(
            height: 12,
          ),
          StreamBuilder<List<StreetView?>>(
              stream: BlocProvider.of<HomeBloc>(context).getListStreetViews(),
              builder: (context, snapshot) {
                if (snapshot.hasData) {
                  var streetViews = snapshot.data;
                  return SingleChildScrollView(
                    scrollDirection: Axis.horizontal,
                    child: Row(
                      children: List.generate(streetViews!.length, (index) {
                        return GestureDetector(
                          onTap: () {
                            AppRoutes.push(
                                context,
                                RoomDetailsPage(
                                  streetView: streetViews[index]!,
                                ));
                          },
                          child: Padding(
                            padding: const EdgeInsets.only(right: 20),
                            child: Container(
                              width: 200,
                              decoration: BoxDecoration(
                                color: Colors.white,
                                borderRadius: BorderRadius.circular(10),
                              ),
                              child: Column(
                                crossAxisAlignment: CrossAxisAlignment.start,
                                children: [
                                  Stack(
                                    children: [
                                      CacheImageNetworkWidget(
                                        width: 200,
                                        height: 120,
                                        borderRadius: 10,
                                        imageUrl:
                                            '${streetViews[index]?.thumbnail}',
                                      ),
                                      Positioned.fill(
                                        top: 10,
                                        right: 10,
                                        child: Align(
                                          alignment: Alignment.topRight,
                                          child: Container(
                                            height: 30,
                                            width: 30,
                                            decoration: BoxDecoration(
                                              color: AppColors.LightSkyBlue,
                                              shape: BoxShape.circle,
                                            ),
                                            child: Icon(
                                              Icons.phone_android,
                                              size: 15,
                                              color: AppColors.CherryPie,
                                            ),
                                          ),
                                        ),
                                      )
                                    ],
                                  ),
                                  const SizedBox(
                                    height: 10,
                                  ),
                                  Padding(
                                    padding: const EdgeInsets.symmetric(
                                        horizontal: 10),
                                    child: Row(
                                      mainAxisAlignment:
                                          MainAxisAlignment.spaceBetween,
                                      children: [
                                        Expanded(
                                          child: Column(
                                            crossAxisAlignment:
                                                CrossAxisAlignment.start,
                                            children: [
                                              Text(
                                                "${streetViews[index]?.name}",
                                                style: AppStyles.textSize16(),
                                              ),
                                              Text(
                                                "Square: 500m2",
                                                style: AppStyles.textSize12(
                                                  color:
                                                      AppColors.CarnationPink,
                                                ),
                                              )
                                            ],
                                          ),
                                        ),
                                        GestureDetector(
                                          onTap: () {
                                            if (BlocProvider.of<HomeBloc>(
                                                    context)
                                                .isLogined) {
                                              BlocProvider.of<HomeBloc>(context)
                                                  .add(SavePlace(
                                                      placeId:
                                                          streetViews[index]!
                                                              .id!));
                                            } else {
                                              AppRoutes.push(
                                                  context, SignUpPage());
                                            }
                                          },
                                          child: StreamBuilder<User?>(
                                              stream: BlocProvider.of<AuthBloc>(
                                                      context)
                                                  .authStateChanges(),
                                              builder: (context, snapshot) {
                                                if (snapshot.hasData) {
                                                  return StreamBuilder<
                                                      DocumentSnapshot<
                                                          Map<String,
                                                              dynamic>>>(
                                                    stream: BlocProvider.of<
                                                            HomeBloc>(context)
                                                        .isFavourite(
                                                            placeId:
                                                                streetViews[
                                                                        index]!
                                                                    .id!),
                                                    builder:
                                                        (context, snapshot) {
                                                      if (snapshot.hasData &&
                                                          snapshot
                                                              .data!.exists) {
                                                        return Container(
                                                          decoration:
                                                              BoxDecoration(
                                                            color: AppColors
                                                                .CarnationPink,
                                                            shape:
                                                                BoxShape.circle,
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
                                                        decoration:
                                                            BoxDecoration(
                                                          color: Colors.black,
                                                          shape:
                                                              BoxShape.circle,
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
                                              }),
                                        ),
                                      ],
                                    ),
                                  ),
                                  const SizedBox(
                                    height: 10,
                                  ),
                                ],
                              ),
                            ),
                          ),
                        );
                      }),
                    ),
                  );
                }
                if (snapshot.hasError) {
                  return Text(snapshot.error.toString());
                }
                return Container();
              }),
          const SizedBox(
            height: 50,
          ),
        ],
      ),
    );
  }
}
