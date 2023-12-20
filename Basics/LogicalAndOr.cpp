#include <iostream>
using namespace std;

int main() {
  bool isSignedIn = false;
  bool isAdmin = true;
  bool isFbUser = true;
  bool isGoogleUser = true;

  if (isAdmin && (isAdmin || isSignedIn)) {
    cout << "Hello Admin" << endl;
  } else {
    cout << "Admin: Your are unable to sign in" << endl;
  }

  if (isAdmin && isSignedIn) {
    cout << "Hello User" << endl;
  } else {
    cout << "User: Your are unable to sign in" << endl;
  }

  return 0;
}