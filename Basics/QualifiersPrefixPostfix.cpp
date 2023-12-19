#include <iostream>
using namespace std;

int lifeUp() {
  int life = 3;
  return ++life;
}

int lifeDown() {
  int life = 3;
  return --life;
}

int main() {
  const int i = 0;
  // i = 8; you cant assign the value to i

  int life = 3;
  cout << "Your starting game life is:" << life << endl;

  life = lifeUp();
  cout << "Your starting game life is:" << life << endl;

  life = lifeDown();
  cout << "Your starting game life is:" << life << endl;

  return 0;
}