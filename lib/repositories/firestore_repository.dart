import 'package:ar_ctu/models/streetview.dart';
import 'package:cloud_firestore/cloud_firestore.dart';

class FirestoreRepository {
  final FirebaseFirestore firestore = FirebaseFirestore.instance;

  Stream<List<StreetView>> getStreetViews() {
    return firestore.collection('streetview').snapshots().map((event) =>
        event.docs.map((e) => StreetView.fromJson(e.data())).toList());
  }
}
