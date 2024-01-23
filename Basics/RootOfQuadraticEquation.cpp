#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, r1, r2;

    cout << "Enter a co-efficent:";
    cin >> a;

    cout << "Enter b co-efficent:";
    cin >> b;

    cout << "Enter c co-efficent:";
    cin >> c;

    r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "Roots are" << r1 << " " << r2;
}