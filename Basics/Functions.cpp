#include <iostream>
#include <string>

using namespace std;

void helloWorld() {
  string str = "Hello World";
  cout << str << endl;
}

void print() {
  string str = "Creating a print statement";
  cout << str << endl;
}

int func() {
  int val = 2;
  return val;
}

void lifeUp(int life) {
  // prefix increment
  ++life;
}

void lifeUp(int *life) {
  // prefix increment
  ++*life;
}

int addme(int a, int b) { return a + b; }

float addme(float a, float b) { return a + b; }

int main() {
  helloWorld();
  print();

  cout << "Returning statement from func: " << func() << endl;

  // Call by reference
  int life = 3;
  lifeUp(life);
  cout << life << endl;

  lifeUp(&life);

  cout << life << endl;
  int a = 5;
  int b = 6;
  float x = 5.8;
  float y = 7.9;

  cout << addme(a, b) << endl;
  cout << addme(x, y) << endl;

  // call by value

  return 0;
}