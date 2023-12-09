#include <iostream>
using namespace std;

int main() {
  int arr[4] = {1, 2, 3, 4};

  cout << "The array memory location is: " << arr << endl;
  cout << "The array value of 0th position is : " << arr[0] << endl;

  int arr1[4];
  arr1[0] = 10;
  arr1[1] = 20;

  cout << "The array memory location is: " << arr1 << endl;
  cout << "The array value of 1st position is : " << arr1[1] << endl;

  *arr = 5;
  cout << "The array value of 0th position is : " << arr[0] << endl;

  int *arr2 = arr1;
  arr2++;

  *arr2 = 209;

  cout << "The array value of 1st position is : " << arr1[1] << endl;

  return 0;
}