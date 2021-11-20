import 'package:ar_ctu/utils/app_colors.dart';
import 'package:ar_ctu/utils/app_styles.dart';
import 'package:ar_ctu/widgets/cache_image_widget.dart';
import 'package:flutter/material.dart';

enum PropertyType { Outdoor, Building, Room }

class PrepertyType extends StatelessWidget {
  const PrepertyType({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Container(
      padding: EdgeInsets.symmetric(horizontal: 25, vertical: 25),
      margin: EdgeInsets.only(bottom: 30, top: 10, right: 25, left: 25),
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
      child: Column(
        children: [
          Row(
            children: [
              Container(
                  padding: EdgeInsets.all(4),
                  decoration: BoxDecoration(
                    shape: BoxShape.circle,
                    color: AppColors.CarnationPink,
                  ),
                  child: Icon(
                    Icons.home,
                    color: Colors.white,
                  )),
              const SizedBox(
                width: 16,
              ),
              Text(
                "Property Type",
                style: AppStyles.textSizeCustom(
                  size: 20,
                  fontWeight: FontWeight.w700,
                ),
              )
            ],
          ),
          const SizedBox(
            height: 20,
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              Opacity(
                opacity: 0.5,
                child: Column(
                  children: [
                    CacheImageNetworkWidget(
                      width: 65,
                      height: 65,
                      borderRadius: 10,
                      imageUrl:
                          'https://bostonglobe-prod.cdn.arcpublishing.com/resizer/tXBIV8tE81ASEmOFIWgiwa06Qeo=/1440x0/cloudfront-us-east-1.images.arcpublishing.com/bostonglobe/X7BUNQH435DHNAB75WYYO2M5A4.jpg',
                    ),
                    const SizedBox(
                      height: 8,
                    ),
                    Text(
                      "Outdoor",
                      style: AppStyles.textSize14(
                        fontWeight: FontWeight.w700,
                        color: AppColors.CarnationPink,
                      ),
                    )
                  ],
                ),
              ),
              Opacity(
                opacity: 0.5,
                child: Column(
                  children: [
                    CacheImageNetworkWidget(
                      width: 65,
                      height: 65,
                      borderRadius: 10,
                      imageUrl:
                          'https://upload.wikimedia.org/wikipedia/commons/1/10/Empire_State_Building_%28aerial_view%29.jpg',
                    ),
                    const SizedBox(
                      height: 8,
                    ),
                    Text(
                      "Building",
                      style: AppStyles.textSize14(
                        fontWeight: FontWeight.w700,
                        color: AppColors.CarnationPink,
                      ),
                    )
                  ],
                ),
              ),
              Opacity(
                opacity: 1,
                child: Column(
                  children: [
                    Stack(
                      children: [
                        CacheImageNetworkWidget(
                          width: 65,
                          height: 65,
                          borderRadius: 10,
                          imageUrl:
                              'https://pix10.agoda.net/hotelImages/agoda-homes/7328614/22de024917ae6aa4494747bf5c25f909.jpg?s=1024x768',
                        ),
                        Positioned.fill(
                          child: Align(
                            alignment: Alignment.center,
                            child: Container(
                              padding: EdgeInsets.all(4),
                              decoration: BoxDecoration(
                                color: AppColors.LightSkyBlue,
                                shape: BoxShape.circle,
                              ),
                              child: Icon(
                                Icons.check,
                                size: 15,
                              ),
                            ),
                          ),
                        )
                      ],
                    ),
                    const SizedBox(
                      height: 8,
                    ),
                    Text(
                      "Room",
                      style: AppStyles.textSize14(
                        fontWeight: FontWeight.w700,
                      ),
                    )
                  ],
                ),
              ),
            ],
          ),
        ],
      ),
    );
  }
}
