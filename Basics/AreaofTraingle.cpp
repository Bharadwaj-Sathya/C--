#include <iostream>
using namespace std;

int main()
{
    float breadth, height, area;

    cout << "Enter the breadth values:";
    cin >> breadth;

    cout << "Enter the height values:";
    cin >> height;

    area = (breadth * height) / 2;
    cout << "Area of traingle is: " << area;
}