import 'package:ar_ctu/blocs/home/home_bloc.dart';
import 'package:ar_ctu/models/streetview.dart';
import 'package:ar_ctu/screens/auth/get_started_page.dart';
import 'package:ar_ctu/screens/room_details/room_details_page.dart';
import 'package:ar_ctu/utils/app_colors.dart';
import 'package:ar_ctu/utils/app_routes.dart';
import 'package:ar_ctu/utils/app_styles.dart';
import 'package:ar_ctu/widgets/cache_image_widget.dart';
import 'package:ar_ctu/widgets/error_widget.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';

import 'my_favourite_appbar.dart';

class MyFavouritePage extends StatefulWidget {
  final GlobalKey<ScaffoldState> scaffoldKey;

  const MyFavouritePage({Key? key, required this.scaffoldKey})
      : super(key: key);
  @override
  _MyFavouritePageState createState() => _MyFavouritePageState();
}

class _MyFavouritePageState extends State<MyFavouritePage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
        body: SafeArea(
      child: Column(
        children: [
          MyFavouriteAppBar(
            onMenuTap: () {
              widget.scaffoldKey.currentState!.openDrawer();
            },
          ),
          if (BlocProvider.of<HomeBloc>(context).isLogined)
            Expanded(
              child: SingleChildScrollView(
                child: StreamBuilder<List<String>>(
                    stream: BlocProvider.of<HomeBloc>(context).myFavourites(),
                    builder: (context, snapshot) {
                      if (snapshot.hasData) {
                        return StreamBuilder<List<StreetView?>>(
                            stream: BlocProvider.of<HomeBloc>(context)
                                .getListStreetViews(ids: snapshot.data),
                            builder: (_, snapshot) {
                              if (snapshot.hasData) {
                                return Column(
                                  children: snapshot.data!.map((e) {
                                    return GestureDetector(
                                      onTap: () {
                                        AppRoutes.push(
                                            context,
                                            RoomDetailsPage(
                                              streetView: e!,
                                            ));
                                      },
                                      child: Padding(
                                        padding: const EdgeInsets.only(
                                            right: 25, left: 25, bottom: 20),
                                        child: Container(
                                          decoration: BoxDecoration(
                                            color: Colors.white,
                                            borderRadius:
                                                BorderRadius.circular(10),
                                          ),
                                          child: Column(
                                            crossAxisAlignment:
                                                CrossAxisAlignment.start,
                                            children: [
                                              Stack(
                                                children: [
                                                  CacheImageNetworkWidget(
                                                    width: double.infinity,
                                                    height: 120,
                                                    borderRadius: 10,
                                                    imageUrl: '${e?.thumbnail}',
                                                  ),
                                                  Positioned.fill(
                                                    top: 10,
                                                    right: 10,
                                                    child: Align(
                                                      alignment:
                                                          Alignment.topRight,
                                                      child: Container(
                                                        height: 30,
                                                        width: 30,
                                                        decoration:
                                                            BoxDecoration(
                                                          color: AppColors
                                                              .LightSkyBlue,
                                                          shape:
                                                              BoxShape.circle,
                                                        ),
                                                        child: Icon(
                                                          Icons.phone_android,
                                                          size: 15,
                                                          color: AppColors
                                                              .CherryPie,
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
                                                padding:
                                                    const EdgeInsets.symmetric(
                                                        horizontal: 10),
                                                child: Row(
                                                  mainAxisAlignment:
                                                      MainAxisAlignment
                                                          .spaceBetween,
                                                  children: [
                                                    Expanded(
                                                      child: Column(
                                                        crossAxisAlignment:
                                                            CrossAxisAlignment
                                                                .start,
                                                        children: [
                                                          Text(
                                                            "${e?.name}",
                                                            style: AppStyles
                                                                .textSize16(),
                                                          ),
                                                          Text(
                                                            "Square: 500m2",
                                                            style: AppStyles
                                                                .textSize12(
                                                              color: AppColors
                                                                  .CarnationPink,
                                                            ),
                                                          )
                                                        ],
                                                      ),
                                                    ),
                                                    GestureDetector(
                                                      onTap: () {
                                                        if (BlocProvider.of<
                                                                    HomeBloc>(
                                                                context)
                                                            .isLogined) {
                                                          BlocProvider.of<
                                                                      HomeBloc>(
                                                                  context)
                                                              .add(SavePlace(
                                                                  placeId:
                                                                      e!.id!));
                                                        } else {
                                                          AppRoutes.push(
                                                              context,
                                                              SignUpPage());
                                                        }
                                                      },
                                                      child: StreamBuilder<
                                                          DocumentSnapshot<
                                                              Map<String,
                                                                  dynamic>>>(
                                                        stream: BlocProvider.of<
                                                                    HomeBloc>(
                                                                context)
                                                            .isFavourite(
                                                                placeId:
                                                                    e!.id!),
                                                        builder: (context,
                                                            snapshot) {
                                                          if (snapshot
                                                                  .hasData &&
                                                              snapshot.data!
                                                                  .exists) {
                                                            return Container(
                                                              decoration:
                                                                  BoxDecoration(
                                                                color: AppColors
                                                                    .CarnationPink,
                                                                shape: BoxShape
                                                                    .circle,
                                                              ),
                                                              width: 35,
                                                              height: 35,
                                                              child: Icon(
                                                                Icons.favorite,
                                                                color: Colors
                                                                    .white,
                                                                size: 14,
                                                              ),
                                                            );
                                                          }
                                                          return Container(
                                                            decoration:
                                                                BoxDecoration(
                                                              color:
                                                                  Colors.black,
                                                              shape: BoxShape
                                                                  .circle,
                                                            ),
                                                            width: 35,
                                                            height: 35,
                                                            child: Icon(
                                                              Icons.favorite,
                                                              color:
                                                                  Colors.white,
                                                              size: 14,
                                                            ),
                                                          );
                                                        },
                                                      ),
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
                                  }).toList(),
                                );
                              }
                              if (snapshot.hasError) {
                                return ErrorStateWidget(
                                  error: snapshot.error.toString(),
                                );
                              }
                              return Container();
                            });
                      }
                      if (snapshot.hasError) {
                        return Text("${snapshot.error}");
                      }
                      return Container();
                    }),
              ),
            )
        ],
      ),
    ));
  }
}
