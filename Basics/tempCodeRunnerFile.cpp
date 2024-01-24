#include <iostream>
using namespace std;

int main()
{

    int x = 11, y = 5;

    cout << "AND: " << (x & y) << endl;
    cout << "OR: " << (x | y) << endl;
    cout << "XOR: " << (x ^ y) << endl;

    char a = 5;

    cout << "Left Shift: " << (a << 1) << endl;
    cout << "Right Shift: " << (a >> 1) << endl;

    return 0;
}