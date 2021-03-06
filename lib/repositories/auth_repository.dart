import 'package:firebase_auth/firebase_auth.dart';
import 'package:cloud_firestore/cloud_firestore.dart';

class AuthRepository {
  FirebaseAuth auth = FirebaseAuth.instance;
  FirebaseFirestore firestore = FirebaseFirestore.instance;
  Future login({required String email, required String password}) {
    return auth.signInWithEmailAndPassword(email: email, password: password);
  }

  Future signUp({
    required String fullName,
    required String email,
    required String password,
    required String imageUrl,
  }) async {
    await auth.createUserWithEmailAndPassword(email: email, password: password);
    await firestore.collection('users').doc(email).set({
      'email': email,
      'fullName': fullName,
      'avatar': imageUrl,
    });
  }

  Future<bool> checkEmailIsRegistered({required String email}) async {
    var doc = await firestore.collection('users').doc(email).get();
    return doc.exists;
  }

  Future<void> logout() async {
    return auth.signOut();
  }

  Stream<User?> authStateChanges() {
    return auth.authStateChanges();
  }
}
