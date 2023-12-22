#include <iostream>
using namespace std;

int func(int x)
{
    static int y = 0;
    if (x > 0)
    {
        y++;
        return func(x - 1) + y;
    }
    return 0;
}

int main()
{
    int a = 5;
    cout << func(5) << endl;
    return 0;
}