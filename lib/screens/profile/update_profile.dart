import 'dart:io';

import 'package:ar_ctu/blocs/auth/auth_bloc.dart';
import 'package:ar_ctu/blocs/profile/profile_bloc.dart';
import 'package:ar_ctu/utils/app_assets.dart';
import 'package:ar_ctu/utils/app_colors.dart';
import 'package:ar_ctu/utils/app_styles.dart';
import 'package:ar_ctu/widgets/action_dialog.dart';
import 'package:ar_ctu/widgets/cache_image_widget.dart';
import 'package:ar_ctu/widgets/custom_textfield.dart';
import 'package:ar_ctu/widgets/loading_widget.dart';
import 'package:ar_ctu/widgets/overlay_loading.dart';
import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:flutter_svg/svg.dart';
import 'package:image_picker/image_picker.dart';

class UpdateProfilePage extends StatefulWidget {
  @override
  _UpdateProfileState createState() => _UpdateProfileState();
}

class _UpdateProfileState extends State<UpdateProfilePage> {
  final TextEditingController _fullNameController = TextEditingController();
  final TextEditingController _emailController = TextEditingController();
  String imageUrl = '';
  File? file;
  @override
  void initState() {
    var profile = BlocProvider.of<ProfileBloc>(context).state.profile;
    _fullNameController.text = profile!.name!;
    _emailController.text = profile.email!;
    imageUrl = profile.avatar ?? "";
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: AppColors.AliceBlue,
      bottomNavigationBar: Container(
        margin: EdgeInsets.symmetric(horizontal: 25, vertical: 20),
        child: GestureDetector(
          onTap: () {
            if (_fullNameController.text.trim().length >= 2) {
              BlocProvider.of<ProfileBloc>(context).add(UpdateProfile(
                  fullName: _fullNameController.text,
                  image: file,
                  onError: (error) {
                    showDialog(
                        context: context,
                        builder: (_) {
                          return InfoDialog(title: 'Opp!', message: '$error');
                        });
                  },
                  onSuccess: () {
                    Navigator.pop(context);
                  },
                  id: _emailController.text));
            } else {
              showDialog(
                  context: context,
                  builder: (_) {
                    return InfoDialog(
                        title: 'Opp!',
                        message: 'Fullname is at least 2 characters');
                  });
            }
          },
          child: Container(
            padding: EdgeInsets.symmetric(horizontal: 20, vertical: 20),
            decoration: BoxDecoration(
              color: AppColors.LightSkyBlue,
              borderRadius: BorderRadius.circular(15),
            ),
            child: Column(
              mainAxisSize: MainAxisSize.min,
              children: [
                Center(
                  child: Text(
                    "Update Profile",
                    style: AppStyles.textSize16(
                      color: Colors.white,
                    ),
                  ),
                ),
              ],
            ),
          ),
        ),
      ),
      body: BlocBuilder<ProfileBloc, ProfileState>(builder: (context, state) {
        return OverlayLoading(
          isLoading: state.updateProfileLoading!,
          child: SafeArea(
            child: Container(
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
                                  offset: Offset(
                                      0, 0), // changes position of shadow
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
                          "My Profile",
                          style: AppStyles.textSize18(),
                        ),
                        IconButton(
                            onPressed: () {
                              BlocProvider.of<AuthBloc>(context)..add(Logout());
                              Navigator.pop(context);
                            },
                            icon: Icon(Icons.login_outlined)),
                      ],
                    ),
                  ),
                  GestureDetector(
                    onTap: () async {
                      XFile? xFile = await ImagePicker()
                          .pickImage(source: ImageSource.gallery);
                      if (xFile != null) {
                        setState(() {
                          file = File(xFile.path);
                        });
                      }
                    },
                    child: file != null
                        ? ClipRRect(
                            borderRadius: BorderRadius.circular(1000),
                            child: Image.file(
                              file!,
                              width: 90,
                              height: 90,
                              fit: BoxFit.cover,
                            ))
                        : imageUrl.isNotEmpty
                            ? ClipRRect(
                                borderRadius: BorderRadius.circular(1000),
                                child: CacheImageNetworkWidget(
                                  imageUrl: imageUrl,
                                  width: 90,
                                  height: 90,
                                ),
                              )
                            : Container(
                                width: 90,
                                height: 90,
                                decoration: BoxDecoration(
                                  color: Colors.white,
                                  shape: BoxShape.circle,
                                ),
                                child: Icon(Icons.account_circle),
                              ),
                  ),
                  const SizedBox(
                    height: 20,
                  ),
                  Padding(
                    padding: EdgeInsets.symmetric(horizontal: 25),
                    child: Column(
                      children: [
                        CustomTextField(
                          controller: _fullNameController,
                          onValid: (valid) {},
                          hintText: 'Full name',
                          validType: ValidType.Name,
                        ),
                        const SizedBox(
                          height: 20,
                        ),
                        CustomTextField(
                          enabled: false,
                          controller: _emailController,
                          onValid: (valid) {},
                          hintText: 'Enter Email',
                          validType: ValidType.Email,
                        ),
                        const SizedBox(
                          height: 20,
                        ),
                      ],
                    ),
                  ),
                ],
              ),
            ),
          ),
        );
      }),
    );
  }
}
