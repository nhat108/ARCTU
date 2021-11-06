import 'package:ar_ctu/screens/unity_view/unity_view.dart';
import 'package:ar_ctu/utils/app_colors.dart';
import 'package:ar_ctu/utils/app_routes.dart';
import 'package:ar_ctu/utils/app_styles.dart';
import 'package:flutter/material.dart';

class ViewArBar extends StatelessWidget {
  final List<String> image360s;
  const ViewArBar({Key? key, required this.image360s}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTap: () {
        AppRoutes.push(
            context,
            UnityView(
              image360s: image360s,
            ));
      },
      child: Container(
        margin: EdgeInsets.symmetric(horizontal: 25, vertical: 20),
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
        child: Container(
          width: double.infinity,
          alignment: Alignment.center,
          padding: EdgeInsets.symmetric(horizontal: 20, vertical: 15),
          decoration: BoxDecoration(
              color: AppColors.LightSkyBlue,
              borderRadius: BorderRadius.circular(20)),
          child: Text(
            "Go to AR",
            style: AppStyles.textSize18(),
          ),
        ),
      ),
    );
  }
}
