import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';

class UnityView extends StatefulWidget {
  @override
  _UnityViewState createState() => _UnityViewState();
}

class _UnityViewState extends State<UnityView> {
  static final GlobalKey<ScaffoldState> _scaffoldKey =
      GlobalKey<ScaffoldState>();
  UnityWidgetController? _unityWidgetController;
  void onUnityCreated(controller) {
    this._unityWidgetController = controller;
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      key: _scaffoldKey,
      body: SafeArea(
        bottom: false,
        child: Container(
          color: Colors.white,
          child: UnityWidget(
            borderRadius: BorderRadius.zero,
            onUnityCreated: onUnityCreated,
          ),
        ),
      ),
    );
  }
}
