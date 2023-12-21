#include <iostream>
using namespace std;

class Rectangle {
 private:
  int length;
  int breadth;

 public:
  Rectangle(int l, int b) {
    length = l;
    breadth = b;
  }

  int area() { return length * breadth; }

  void setLength(int l) { length = l; }

  void setBreadth(int b) { breadth = b; }

  int getLength() { return length; }

  int getBreadth() { return breadth; }
};

int main() {
  int length = 0;
  int breadth = 0;
  cout << "Enter Length and Breadth values:";
  cin >> length >> breadth;

  Rectangle r(length, breadth);

  int area = r.area();
  cout << "Area of Rectangle is: " << area << endl;

  r.setBreadth(10);

  area = r.area();
  cout << "Area of Rectangle is: " << area << endl;

  return 0;
}
