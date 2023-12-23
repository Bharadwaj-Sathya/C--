#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return factorial(n - 1) * n;
    }
}

int ncr(int n, int r)
{
    int num, den;
    num = factorial(n);
    den = factorial(r) * factorial(n - r);
    return num / den;
}

int ncr_recursive(int n, int r)
{
    if (n == r || r == 0)
    {
        return 1;
    }
    else
    {
        return ncr_recursive(n - 1, r - 1) + ncr_recursive(n - 1, r);
    }
}
int main()
{
    int x = 4;
    int y = 2;
    cout << ncr(x, y) << endl;
    cout << ncr_recursive(x, y) << endl;

    return 0;
}