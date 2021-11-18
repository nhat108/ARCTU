import 'dart:io';

import 'package:ar_ctu/models/profile.dart';
import 'package:ar_ctu/models/streetview.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_storage/firebase_storage.dart' as firebase_storage;
import 'package:firebase_storage/firebase_storage.dart';

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

  Future<String> upLoadImage({required String path, required File file}) async {
    UploadTask uploadTask = storage.ref(path).putFile(file);
    var result = await uploadTask.then((p0) {
      return p0.ref.getDownloadURL();
    });
    return result;
  }

  Future<Profile> getProfile(String id) async {
    var data = await firestore.collection('users').doc(id).get();
    return Profile.fromJson(data.data()!);
  }

  Future<void> updateProfile(
      {required String id, required Map<String, dynamic> data}) async {
    return firestore.collection('users').doc(id).update(data);
  }

  Future<void> savePlace(
      {required String userId, required String placeId}) async {
    var doc = firestore
        .collection('users')
        .doc(userId)
        .collection('favourite')
        .doc(placeId);
    var data = await doc.get();
    if (data.exists) {
      await doc.delete();
    } else {
      await doc.set({'datetime': DateTime.now().toIso8601String()});
    }
  }

  Stream<DocumentSnapshot<Map<String, dynamic>>> isFavourite(
      {required String userId, required String placeId}) {
    return firestore
        .collection('users')
        .doc(userId)
        .collection('favourite')
        .doc(placeId)
        .snapshots();
  }
}
