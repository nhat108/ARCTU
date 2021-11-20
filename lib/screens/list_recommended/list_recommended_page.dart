import 'package:ar_ctu/blocs/home/home_bloc.dart';
import 'package:ar_ctu/models/streetview.dart';
import 'package:ar_ctu/screens/room_details/room_details_page.dart';
import 'package:ar_ctu/utils/app_assets.dart';
import 'package:ar_ctu/utils/app_colors.dart';
import 'package:ar_ctu/utils/app_routes.dart';
import 'package:ar_ctu/utils/app_styles.dart';
import 'package:ar_ctu/widgets/cache_image_widget.dart';
import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:flutter_svg/flutter_svg.dart';

class ListRecommendedPage extends StatefulWidget {
  const ListRecommendedPage({Key? key}) : super(key: key);

  @override
  _ListRecommendedPageState createState() => _ListRecommendedPageState();
}

class _ListRecommendedPageState extends State<ListRecommendedPage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: AppColors.AliceBlue,
      body: SafeArea(
        child: Column(
          children: [
            Container(
              padding: EdgeInsets.symmetric(horizontal: 24, vertical: 20),
              child: Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  GestureDetector(
                    onTap: () {
                      Navigator.pop(context);
                    },
                    child: Container(
                      width: 40,
                      height: 40,
                      padding: EdgeInsets.all(10),
                      alignment: Alignment.center,
                      decoration: BoxDecoration(
                        color: Colors.white,
                        borderRadius: BorderRadius.circular(10),
                        boxShadow: [
                          BoxShadow(
                            color: Colors.grey[300]!.withOpacity(0.3),
                            spreadRadius: 2,
                            blurRadius: 10,
                            offset: Offset(0, 0), // changes position of shadow
                          ),
                        ],
                      ),
                      child: SvgPicture.asset(
                        AppAssets.arrowBack,
                        width: 9,
                      ),
                    ),
                  ),
                  Text(
                    "Recommended",
                    style: AppStyles.textSize18(),
                  ),
                  Container(
                    width: 40,
                  ),
                ],
              ),
            ),
            Expanded(
              child: StreamBuilder<List<StreetView?>>(
                  stream:
                      BlocProvider.of<HomeBloc>(context).getListStreetViews(),
                  builder: (context, snapshot) {
                    if (snapshot.hasData) {
                      var streetViews = snapshot.data;
                      return ListView.separated(
                          padding: EdgeInsets.symmetric(horizontal: 25),
                          itemBuilder: (_, index) {
                            return GestureDetector(
                              onTap: () {
                                AppRoutes.push(
                                    context,
                                    RoomDetailsPage(
                                      streetView: streetViews![index]!,
                                    ));
                              },
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
                                          height: 120,
                                          borderRadius: 10,
                                          width: double.infinity,
                                          imageUrl:
                                              '${streetViews![index]?.thumbnail}',
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
                                                  "Rộng: 500m2",
                                                  style: AppStyles.textSize12(
                                                    color:
                                                        AppColors.CarnationPink,
                                                  ),
                                                )
                                              ],
                                            ),
                                          ),
                                          Container(
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
                            );
                          },
                          separatorBuilder: (_, __) => const SizedBox(
                                height: 20,
                              ),
                          itemCount: snapshot.data!.length);
                    }
                    return Container();
                  }),
            ),
          ],
        ),
      ),
    );
  }
}
