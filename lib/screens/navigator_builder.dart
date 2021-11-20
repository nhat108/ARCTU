import 'dart:ui';

import 'package:ar_ctu/screens/home/home_page.dart';
import 'package:ar_ctu/screens/info_page/info_page.dart';
import 'package:ar_ctu/screens/my_favourite/my_favourite_page.dart';
import 'package:ar_ctu/utils/app_colors.dart';
import 'package:ar_ctu/utils/app_styles.dart';
import 'package:flutter/material.dart';

enum MenuTab { Home, MyFavourite, Info }

class NavigatorBuilder extends StatefulWidget {
  const NavigatorBuilder({Key? key}) : super(key: key);

  @override
  _NavigatorBuilderState createState() => _NavigatorBuilderState();
}

class _NavigatorBuilderState extends State<NavigatorBuilder> {
  final GlobalKey<ScaffoldState> _scaffoldKey = new GlobalKey<ScaffoldState>();

  MenuTab _menuTab = MenuTab.Home;
  Widget _body() {
    switch (_menuTab) {
      case MenuTab.Home:
        return HomePage(
          scaffoldKey: _scaffoldKey,
        );
      case MenuTab.MyFavourite:
        return MyFavouritePage(
          scaffoldKey: _scaffoldKey,
        );
      case MenuTab.Info:
        return InfoPage();
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      key: _scaffoldKey,
      backgroundColor: AppColors.AliceBlue,
      drawerScrimColor: Colors.transparent,
      drawer: ClipRect(
        child: Container(
          width: MediaQuery.of(context).size.width * 0.65,
          margin: EdgeInsets.symmetric(vertical: 50),
          child: BackdropFilter(
            filter: ImageFilter.blur(sigmaX: 10.0, sigmaY: 10.0),
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Divider(
                  height: 1,
                ),
                GestureDetector(
                  onTap: () {
                    setState(() {
                      _menuTab = MenuTab.Home;
                    });
                    Navigator.pop(context);
                  },
                  child: Container(
                    color: _menuTab == MenuTab.Home
                        ? AppColors.CarnationPink
                        : Colors.transparent,
                    padding: EdgeInsets.symmetric(horizontal: 16, vertical: 10),
                    child: Row(
                      children: [
                        Container(
                            padding: EdgeInsets.all(6),
                            decoration: BoxDecoration(
                              shape: BoxShape.circle,
                              color: AppColors.CarnationPink,
                            ),
                            child: Icon(
                              Icons.home,
                              color: Colors.white,
                              size: 25,
                            )),
                        const SizedBox(
                          width: 6,
                        ),
                        Text(
                          "Home",
                          style: AppStyles.textSize18(),
                        ),
                      ],
                    ),
                  ),
                ),
                Divider(
                  height: 1,
                ),
                GestureDetector(
                  onTap: () {
                    setState(() {
                      _menuTab = MenuTab.MyFavourite;
                    });
                    Navigator.pop(context);
                  },
                  child: Container(
                    color: _menuTab == MenuTab.MyFavourite
                        ? AppColors.CarnationPink
                        : Colors.transparent,
                    padding: EdgeInsets.symmetric(horizontal: 16, vertical: 10),
                    child: Row(
                      children: [
                        Container(
                            padding: EdgeInsets.all(6),
                            decoration: BoxDecoration(
                              shape: BoxShape.circle,
                              color: AppColors.CarnationPink,
                            ),
                            child: Icon(
                              Icons.favorite,
                              color: Colors.white,
                              size: 25,
                            )),
                        const SizedBox(
                          width: 6,
                        ),
                        Text(
                          "My Favourite",
                          style: AppStyles.textSize18(),
                        ),
                      ],
                    ),
                  ),
                ),
                Divider(
                  height: 1,
                ),
                GestureDetector(
                  onTap: () {
                    setState(() {
                      _menuTab = MenuTab.Info;
                    });
                    Navigator.pop(context);
                  },
                  child: Container(
                    color: _menuTab == MenuTab.Info
                        ? AppColors.CarnationPink
                        : Colors.transparent,
                    padding: EdgeInsets.symmetric(horizontal: 16, vertical: 10),
                    child: Row(
                      children: [
                        Container(
                            padding: EdgeInsets.all(6),
                            decoration: BoxDecoration(
                              shape: BoxShape.circle,
                              color: AppColors.CarnationPink,
                            ),
                            child: Icon(
                              Icons.info_outline,
                              color: Colors.white,
                              size: 25,
                            )),
                        const SizedBox(
                          width: 6,
                        ),
                        Text(
                          "About",
                          style: AppStyles.textSize18(),
                        ),
                      ],
                    ),
                  ),
                ),
                Divider(
                  height: 1,
                ),
              ],
            ),
          ),
        ),
      ),
      body: _body(),
    );
  }
}
