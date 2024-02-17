#include <iostream>

int main() {
    int i, j;
    int n = 20; // Height of the letter A

    for (i = 0; i < n; i++) {
        for (j = 0; j <= n / 2 + 1; j++) {
            if ((j == 0 || j == n / 2) && i != 0 ||
                i == 0 && j != 0 && j != n / 2 ||
                i == n / 2)
                std::cout << "*";
            else if (i > n / 2 && (j == n / 2 || j == n / 2 + 1))
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}