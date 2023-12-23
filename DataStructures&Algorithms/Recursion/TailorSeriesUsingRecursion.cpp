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
int main()
{
    int x = 4;
    int y = 15;
    cout << tailorSeries(x, y) << endl;
    return 0;
}