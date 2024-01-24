#include <iostream>
using namespace std;

int main()
{
    int u, v, a;
    float speed;

    cout << "Enter U: ";
    cin >> u;

    cout << "lnEnter V: ";
    cin >> v;

    cout << "lnEnter a: ";
    cin >> a;

    speed = (v * v - u * u) / (2 * a);

    cout << "The speed is: " << speed;

    return 0;
}