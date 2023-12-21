#include <iostream>
using namespace std;

struct Rectangle {
  int length;
  int breadth;
};

void intialize(struct Rectangle *r, int l, int b) {
  r->length = l;
  r->breadth = b;
}

int area(struct Rectangle r) { return r.length * r.breadth; }

void changeLegth(struct Rectangle *r, int l) { 
    r->length = l; 
    
}


int main() {
  struct Rectangle r;

  return 0;
}