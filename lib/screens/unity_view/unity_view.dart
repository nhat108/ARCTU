import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';

class UnityView extends StatefulWidget {
  final List<String> image360s;

  const UnityView({Key? key, required this.image360s}) : super(key: key);
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
  void dispose() {
    _unityWidgetController!.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      key: _scaffoldKey,
      floatingActionButton: FloatingActionButton(onPressed: () {
        _unityWidgetController!.postMessage('Sphere', "SetTexture", '');
      }),
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
