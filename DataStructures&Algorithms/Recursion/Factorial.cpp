#include <iostream>

// Function to calculate the factorial of a number
unsigned long long factorial(int n)
{
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main()
{
    // Input: The number for which you want to calculate the factorial
    int number;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    // Check if the input is non-negative
    if (number < 0)
    {
        std::cout << "Please enter a non-negative integer." << std::endl;
    }
    else
    {
        // Calculate and display the factorial
        unsigned long long result = factorial(number);
        std::cout << "Factorial of " << number << " is: " << result << std::endl;
    }

    return 0;
}
