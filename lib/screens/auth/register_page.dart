import 'dart:io';

import 'package:ar_ctu/blocs/auth/auth_bloc.dart';
import 'package:ar_ctu/screens/auth/login_page.dart';
import 'package:ar_ctu/utils/app_assets.dart';
import 'package:ar_ctu/utils/app_colors.dart';
import 'package:ar_ctu/utils/app_routes.dart';
import 'package:ar_ctu/utils/app_styles.dart';
import 'package:ar_ctu/widgets/action_dialog.dart';
import 'package:ar_ctu/widgets/custom_textfield.dart';
import 'package:ar_ctu/widgets/overlay_loading.dart';
import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:flutter_svg/flutter_svg.dart';
import 'package:image_picker/image_picker.dart';

class RegisterPage extends StatefulWidget {
  final String email;
  const RegisterPage({Key? key, required this.email}) : super(key: key);

  @override
  _RegisterPageState createState() => _RegisterPageState();
}

class _RegisterPageState extends State<RegisterPage> {
  bool showPassword = false;
  final TextEditingController _fullNameController = TextEditingController();
  final TextEditingController _passwordController = TextEditingController();
  File? image;
  @override
  Widget build(BuildContext context) {
    return BlocBuilder<AuthBloc, AuthState>(builder: (context, state) {
      return OverlayLoading(
        isLoading: state.isAuthLoading!,
        child: GestureDetector(
          onTap: () {
            FocusScope.of(context).requestFocus(new FocusNode());
          },
          child: Scaffold(
            backgroundColor: Colors.white,
            bottomNavigationBar: Container(
              margin: EdgeInsets.symmetric(horizontal: 25, vertical: 20),
              child: GestureDetector(
                onTap: () {
                  BlocProvider.of<AuthBloc>(context).add(SignUp(
                      email: widget.email,
                      password: _passwordController.text,
                      fullName: _fullNameController.text,
                      image: image,
                      onError: (error) {
                        showDialog(
                            context: context,
                            builder: (_) => InfoDialog(message: error));
                      },
                      onSuccess: () {
                        AppRoutes.replace(
                            context, LoginPage(email: widget.email));
                      }));
                },
                child: Container(
                  padding: EdgeInsets.symmetric(horizontal: 20, vertical: 20),
                  decoration: BoxDecoration(
                    color: Color(0xff5D4CCA),
                    borderRadius: BorderRadius.circular(15),
                  ),
                  child: Column(
                    mainAxisSize: MainAxisSize.min,
                    children: [
                      Center(
                        child: Text(
                          "Register",
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
            body: SingleChildScrollView(
              child: SafeArea(
                child: Padding(
                  padding: EdgeInsets.symmetric(horizontal: 24, vertical: 20),
                  child: Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      Container(
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
                          ],
                        ),
                      ),
                      const SizedBox(
                        height: 20,
                      ),
                      Text(
                        "Hello!\nSignup to\nGet Started",
                        style: AppStyles.textSizeCustom(
                          size: 20,
                          fontWeight: FontWeight.w700,
                        ),
                      ),
                      const SizedBox(
                        height: 20,
                      ),
                      GestureDetector(
                        onTap: () async {
                          var file = await ImagePicker()
                              .pickImage(source: ImageSource.gallery);
                          if (file != null) {
                            setState(() {
                              image = File(file.path);
                            });
                          }
                        },
                        child: Center(
                          child: Stack(
                            children: [
                              image != null
                                  ? ClipRRect(
                                      borderRadius: BorderRadius.circular(1000),
                                      child: Image.file(
                                        image!,
                                        width: 90,
                                        height: 90,
                                        fit: BoxFit.cover,
                                      ),
                                    )
                                  : Container(
                                      width: 90,
                                      height: 90,
                                      decoration: BoxDecoration(
                                        color: AppColors.AliceBlue,
                                        shape: BoxShape.circle,
                                      ),
                                      child: Icon(Icons.account_circle),
                                    ),
                              Positioned(
                                bottom: 2,
                                right: 5,
                                child: Container(
                                  width: 20,
                                  height: 20,
                                  decoration: BoxDecoration(
                                      shape: BoxShape.circle,
                                      color: Colors.black),
                                  child: Icon(
                                    Icons.camera_alt,
                                    color: Colors.white,
                                    size: 16,
                                  ),
                                ),
                              )
                            ],
                          ),
                        ),
                      ),
                      const SizedBox(
                        height: 20,
                      ),
                      CustomTextField(
                        enabled: false,
                        controller: TextEditingController(text: widget.email),
                        onValid: (valid) {},
                        hintText: 'Enter Email',
                        validType: ValidType.Email,
                      ),
                      const SizedBox(
                        height: 20,
                      ),
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
                        controller: _passwordController,
                        obscureText: !showPassword,
                        onValid: (valid) {},
                        hintText: 'Password',
                        validType: ValidType.Password,
                        onSuffixIconTap: () {
                          setState(() {
                            showPassword = !showPassword;
                          });
                        },
                        suffixIcon: Icon(showPassword
                            ? Icons.visibility
                            : Icons.visibility_off),
                      ),
                      const SizedBox(
                        height: 20,
                      ),
                    ],
                  ),
                ),
              ),
            ),
          ),
        ),
      );
    });
  }
}
