#include <iostream>
#include <string>

using namespace std;

class User {
  int secret = 24;

 public:
  string name = "default";
  void getName() { cout << "Name: " << name << endl; }
};

int main() {
  User sam;
  sam.name = "Sam";
  sam.getName();

  User Sathya;
  Sathya.getName();
  Sathya.name = "Sathya";
  Sathya.getName();

  return 0;
}