#include <iostream>
using namespace std;

int F[10];

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 2) + fibonacci(n - 1);
    }
}

// Excessive Recursion
int fibonacciIterative(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        int a = 0;
        int b = 1;
        int sum = 0;
        for (int i = 2; i <= n; i++)
        {
            sum = a + b;
            a = b;
            b = sum;
        }

        return sum;
    }
}

int fibonacciMemorisation(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
        {
            F[n - 2] = fibonacciMemorisation(n - 2);
        }
        if (F[n - 1] == -1)
        {
            F[n - 1] = fibonacciMemorisation(n - 1);
        }

        return F[n - 2] + F[n - 1];
    }
}

int main()
{
    int x = 6;
    cout << "Fibbonacci Series: of " << x << " is: " << fibonacci(x) << endl;
    cout << "Fibbonacci Series: of " << x << " is: " << fibonacciIterative(x) << endl;

    for (int i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    cout << "Fibbonacci Series: of " << x << " is: " << fibonacciMemorisation(x) << endl;

    return 0;
}