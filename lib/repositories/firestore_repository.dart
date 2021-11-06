import 'package:ar_ctu/models/streetview.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_storage/firebase_storage.dart' as firebase_storage;

class FirestoreRepository {
  final FirebaseFirestore firestore = FirebaseFirestore.instance;
  final storage = firebase_storage.FirebaseStorage.instance;
  Stream<List<StreetView>> getStreetViews() {
    return firestore.collection('streetview').snapshots().map((event) =>
        event.docs.map((e) => StreetView.fromJson(e.data())).toList());
  }

  Future<List<String>> getImage360({required String id}) async {
    var results = await storage.ref('image360/$id').list();
    List<String> urls = [];
    for (int i = 0; i < results.items.length; i++) {
      final url = await results.items[i].getDownloadURL();
      urls.add(url);
    }
    return urls;
  }
}
