import 'package:ar_ctu/blocs/home/home_bloc.dart';
import 'package:ar_ctu/models/streetview.dart';
import 'package:ar_ctu/screens/auth/get_started_page.dart';
import 'package:ar_ctu/screens/room_details/room_details_page.dart';
import 'package:ar_ctu/utils/app_assets.dart';
import 'package:ar_ctu/utils/app_colors.dart';
import 'package:ar_ctu/utils/app_routes.dart';
import 'package:ar_ctu/utils/app_styles.dart';
import 'package:ar_ctu/utils/parseError.dart';
import 'package:ar_ctu/widgets/cache_image_widget.dart';
import 'package:ar_ctu/widgets/loading_widget.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:flutter_svg/svg.dart';
import 'package:fluttertoast/fluttertoast.dart';

class SearchPage extends StatefulWidget {
  final String query;

  const SearchPage({Key? key, required this.query}) : super(key: key);
  @override
  _SearchPageState createState() => _SearchPageState();
}

class _SearchPageState extends State<SearchPage> {
  final TextEditingController _textEditingController = TextEditingController();
  List<StreetView?> streetViews = [];
  bool isLoading = false;
  _searchPlace() async {
    try {
      FocusScope.of(context).requestFocus(new FocusNode());

      setState(() {
        isLoading = true;
      });
      List<StreetView?> results = await BlocProvider.of<HomeBloc>(context)
          .firestoreRepository
          .searchPlace(
            query: _textEditingController.text.trim(),
          );
      streetViews = results;
      setState(() {
        isLoading = false;
      });
    } catch (e) {
      ParseError error = ParseError.fromJson(e);
      Fluttertoast.showToast(msg: '${error.message}');
      setState(() {
        isLoading = false;
      });
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        elevation: 0.5,
        backgroundColor: AppColors.AliceBlue,
        leading: IconButton(
          icon: Icon(
            Icons.arrow_back_ios,
            color: AppColors.CherryPie,
          ),
          onPressed: () {
            Navigator.pop(context);
          },
        ),
        title: TextField(
          controller: _textEditingController,
          onEditingComplete: () {
            _searchPlace();
          },
          decoration: InputDecoration(
              focusedBorder: InputBorder.none,
              border: InputBorder.none,
              hintText: 'Search Place'),
        ),
        actions: [
          IconButton(
            onPressed: () async {
              _searchPlace();
            },
            icon: SvgPicture.asset(
              AppAssets.searchIcon,
              width: 15,
              color: AppColors.CherryPie,
            ),
          )
        ],
      ),
      body: isLoading
          ? LoadingWidget()
          : streetViews.isEmpty
              ? Center(
                  child: Text(
                  "Empty",
                  style: AppStyles.textSize16(),
                ))
              : ListView.builder(
                  itemCount: streetViews.length,
                  itemBuilder: (_, index) {
                    var e = streetViews[index];
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
                            borderRadius: BorderRadius.circular(10),
                          ),
                          child: Column(
                            crossAxisAlignment: CrossAxisAlignment.start,
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
                                padding:
                                    const EdgeInsets.symmetric(horizontal: 10),
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
                                            "${e?.name}",
                                            style: AppStyles.textSize16(),
                                          ),
                                          Text(
                                            "Square: 500m2",
                                            style: AppStyles.textSize12(
                                              color: AppColors.CarnationPink,
                                            ),
                                          )
                                        ],
                                      ),
                                    ),
                                    GestureDetector(
                                      onTap: () {
                                        if (BlocProvider.of<HomeBloc>(context)
                                            .isLogined) {
                                          BlocProvider.of<HomeBloc>(context)
                                              .add(SavePlace(placeId: e!.id!));
                                        } else {
                                          AppRoutes.push(context, SignUpPage());
                                        }
                                      },
                                      child: StreamBuilder<
                                          DocumentSnapshot<
                                              Map<String, dynamic>>>(
                                        stream:
                                            BlocProvider.of<HomeBloc>(context)
                                                .isFavourite(placeId: e!.id!),
                                        builder: (context, snapshot) {
                                          if (snapshot.hasData &&
                                              snapshot.data!.exists) {
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
                              ),
                              const SizedBox(
                                height: 10,
                              ),
                            ],
                          ),
                        ),
                      ),
                    );
                  },
                ),
    );
  }
}
