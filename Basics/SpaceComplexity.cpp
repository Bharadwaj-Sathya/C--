#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    int sum = 0; // This variable is used to store the sum of the array elements
    for(int i = 0; i < n; i++) {
        sum += arr[i]; // Add each element to the sum
    }
    return sum; // Return the sum
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array elements is: " << sumArray(arr, n) << endl;
    return 0;
}
