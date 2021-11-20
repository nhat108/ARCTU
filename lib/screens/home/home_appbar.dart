import 'package:ar_ctu/blocs/auth/auth_bloc.dart';
import 'package:ar_ctu/blocs/home/home_bloc.dart';
import 'package:ar_ctu/blocs/profile/profile_bloc.dart';
import 'package:ar_ctu/models/streetview.dart';
import 'package:ar_ctu/screens/auth/get_started_page.dart';
import 'package:ar_ctu/screens/profile/update_profile.dart';
import 'package:ar_ctu/screens/room_details/room_details_page.dart';
import 'package:ar_ctu/screens/search_page/search_page.dart';
import 'package:ar_ctu/utils/app_assets.dart';
import 'package:ar_ctu/utils/app_colors.dart';
import 'package:ar_ctu/utils/app_routes.dart';
import 'package:ar_ctu/utils/app_styles.dart';
import 'package:ar_ctu/widgets/cache_image_widget.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:flutter_svg/flutter_svg.dart';
import 'package:flutter_typeahead/flutter_typeahead.dart';

class HomeAppBar extends StatefulWidget {
  final VoidCallback onMenuTap;
  const HomeAppBar({Key? key, required this.onMenuTap}) : super(key: key);

  @override
  State<HomeAppBar> createState() => _HomeAppBarState();
}

class _HomeAppBarState extends State<HomeAppBar> {
  final TextEditingController _textEditingController = TextEditingController();
  @override
  Widget build(BuildContext context) {
    return Container(
      padding: EdgeInsets.symmetric(horizontal: 24, vertical: 20),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              GestureDetector(
                onTap: widget.onMenuTap,
                child: Container(
                  width: 40,
                  height: 40,
                  padding: EdgeInsets.all(10),
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
                    AppAssets.slideMenuIcon,
                    width: 20,
                  ),
                ),
              ),
              StreamBuilder<User?>(
                  stream: BlocProvider.of<AuthBloc>(context).authStateChanges(),
                  builder: (context, snapshot) {
                    if (snapshot.data != null) {
                      return GestureDetector(onTap: () {
                        AppRoutes.push(context, UpdateProfilePage());
                      }, child: BlocBuilder<ProfileBloc, ProfileState>(
                          builder: (context, state) {
                        if (state.profile != null) {
                          return CacheImageNetworkWidget(
                              width: 40,
                              height: 40,
                              borderRadius: 10,
                              imageUrl: '${state.profile!.avatar}');
                        }
                        return Container();
                      }));
                    }
                    return GestureDetector(
                      onTap: () {
                        AppRoutes.push(context, SignUpPage());
                      },
                      child: Container(
                        child: Text(
                          "Login",
                          style: AppStyles.textSize16(),
                        ),
                      ),
                    );
                  })
            ],
          ),
          const SizedBox(
            height: 20,
          ),
          Text(
            "Discovery\nThe World Around You!",
            style: AppStyles.textSizeCustom(
              size: 26,
              fontWeight: FontWeight.w700,
            ),
          ),
          const SizedBox(
            height: 14,
          ),
          Row(
            children: [
              Expanded(
                child: TypeAheadFormField(
                  enabled: true,
                  suggestionsBoxController: SuggestionsBoxController(),
                  textFieldConfiguration: TextFieldConfiguration(
                    controller: _textEditingController,
                    decoration: InputDecoration(
                      labelText: 'Search',
                      labelStyle: AppStyles.textSize14(
                        color: AppColors.CarnationPink,
                        fontWeight: FontWeight.w500,
                      ),
                      prefixIcon: Column(
                        mainAxisAlignment: MainAxisAlignment.center,
                        children: [
                          SvgPicture.asset(
                            AppAssets.searchIcon,
                            width: 15,
                            color: AppColors.CarnationPink,
                          ),
                        ],
                      ),
                      fillColor: Colors.white,
                      border: OutlineInputBorder(
                        borderRadius: BorderRadius.circular(100),
                        borderSide: BorderSide(
                          width: 0,
                          color: Colors.white,
                        ),
                      ),
                      enabledBorder: OutlineInputBorder(
                        borderRadius: BorderRadius.circular(100),
                        borderSide: BorderSide(
                          width: 0,
                          color: Colors.white,
                        ),
                      ),
                      focusedBorder: OutlineInputBorder(
                        borderRadius: BorderRadius.circular(100),
                        borderSide: BorderSide(
                          width: 0,
                          color: Colors.white,
                        ),
                      ),
                      floatingLabelBehavior: FloatingLabelBehavior.never,
                      filled: true,
                    ),
                  ),
                  suggestionsCallback: (pattern) async {
                    print(pattern);
                    if (pattern.isNotEmpty) {
                      return await BlocProvider.of<HomeBloc>(context)
                          .firestoreRepository
                          .searchPlace(query: pattern);
                    }
                    return Future.value([]);
                  },
                  itemBuilder: (context, dynamic suggestion) {
                    return ListTile(
                      leading: Icon(
                        Icons.location_on,
                        color: AppColors.CherryPie,
                      ),
                      title: Text(
                        '${suggestion?.name}',
                        style: AppStyles.textSize14(),
                      ),
                    );
                  },
                  transitionBuilder: (context, suggestionsBox, controller) {
                    return suggestionsBox;
                  },
                  onSuggestionSelected: (dynamic suggestion) {
                    AppRoutes.push(
                        context,
                        RoomDetailsPage(
                          streetView: suggestion,
                        ));
                  },
                ),
              ),
              const SizedBox(
                width: 8,
              ),
              GestureDetector(
                onTap: () {
                  AppRoutes.push(context,
                      SearchPage(query: _textEditingController.text.trim()));
                },
                child: Container(
                  width: 60,
                  padding: EdgeInsets.symmetric(horizontal: 20, vertical: 15),
                  decoration: BoxDecoration(
                    color: AppColors.LightSkyBlue,
                    borderRadius: BorderRadius.circular(100),
                    boxShadow: [
                      BoxShadow(
                        color: Colors.grey[300]!.withOpacity(0.3),
                        spreadRadius: 2,
                        blurRadius: 10,
                        offset: Offset(0, 0), // changes position of shadow
                      ),
                    ],
                  ),
                  child: SvgPicture.asset(AppAssets.searchIcon,
                      width: 15, color: AppColors.CherryPie),
                ),
              ),
            ],
          )
        ],
      ),
    );
  }
}
