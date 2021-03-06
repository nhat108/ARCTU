import 'package:ar_ctu/blocs/auth/auth_bloc.dart';
import 'package:ar_ctu/blocs/home/home_bloc.dart';
import 'package:ar_ctu/blocs/profile/profile_bloc.dart';
import 'package:ar_ctu/blocs/room_details/room_details_bloc.dart';
import 'package:ar_ctu/main.dart';
import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';

class SimpleBlocObserver extends BlocObserver {
  @override
  void onEvent(Bloc bloc, Object? event) {
    print(event);
    super.onEvent(bloc, event);
  }

  @override
  void onTransition(Bloc bloc, Transition transition) {
    super.onTransition(bloc, transition);
    // print(transition);
  }

  @override
  void onError(BlocBase bloc, Object error, StackTrace stackTrace) {
    print(error);
    super.onError(bloc, error, stackTrace);
  }
}

class BlocManager extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MultiBlocProvider(providers: [
      BlocProvider(create: (context) => ProfileBloc()),
      BlocProvider(
          create: (context) =>
              AuthBloc(profileBloc: BlocProvider.of<ProfileBloc>(context))
                ..add(GetStarted())),
      BlocProvider(create: (_) => HomeBloc()),
      BlocProvider(create: (_) => RoomDetailsBloc()),
    ], child: MyApp());
  }
}
