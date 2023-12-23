#include <iostream>
using namespace std;

double tailorSeries(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if (n == 0)
    {
        return 1;
    }
    else
    {
        r = tailorSeries(x, n - 1);
        p = p * x;
        f = f * n;
        return r + p / f;
    }
}

double tailorseries1(int x, int n)
{
    static double s = 1;
    if (n == 0)
    {
        return s;
    }

    s = 1 + x * s / n;
    return tailorseries1(x, n - 1);
}

int main()
{
    int x = 1;
    int y = 10;
    cout << tailorSeries(x, y) << endl;
    cout << tailorseries1(x, y) << endl;

    return 0;
}