#include <iostream>
using namespace std;

struct Rectangle {
  int length;
  int breadth;
};

int area(Rectangle r) { return r.length * r.breadth; }

void func(struct Rectangle *p) {
  p->length = 20;
  cout << "Length of a Recatangle is: " << p->length << endl;
  cout << "Breadth of a Recatangle is: " << p->breadth << endl;
}

struct Rectangle *func() {
  struct Rectangle *p;
  p = new Rectangle;
  p->length = 15;
  p->breadth = 7;

  return p;
}

int main() {
  struct Rectangle r;
  r.length = 10;
  r.breadth = 15;
  cout << "Length of a Recatangle is: " << r.length << endl;
  cout << "Breadth of a Recatangle is: " << r.breadth << endl;

  // Passing by value
  cout << "Area of rectangle is: " << area(r) << endl;

  // Passing by address
  func(&r);

  // Returning address iof structure
  struct Rectangle *ptr = func();
  cout << "Length of a Recatangle is: " << ptr->length << endl;
  cout << "Breadth of a Recatangle is: " << ptr->breadth << endl;

  return 0;
}