#include <iostream>
using namespace std;

int main()
{
    // Declarinng and intializing
    int a[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}};

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << a[row][col];
        }
        cout << "\n";
    }

    return 0;
}