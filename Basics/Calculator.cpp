#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    char operation;
    int n;

    cout << "Enter the number of operands (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: Invalid number of operands!" << endl;
        return 1;
    }

    vector<double> operands(n);

    // Get operands from the user
    for (int i = 0; i < n; ++i) {
        cout << "Enter operand " << i + 1 << ": ";
        cin >> operands[i];
    }

    cout << "Enter an operation (+, -, *, /, sqrt, sin, cos, tan): ";
    cin >> operation;

    double result;

    switch (operation) {
        case '+':
            result = 0;
            for (double operand : operands) {
                result += operand;
            }
            break;
        case '-':
            result = operands[0];
            for (int i = 1; i < n; ++i) {
                result -= operands[i];
            }
            break;
        case '*':
            result = 1;
            for (double operand : operands) {
                result *= operand;
            }
            break;
        case '/':
            result = operands[0];
            for (int i = 1; i < n; ++i) {
                if (operands[i] != 0) {
                    result /= operands[i];
                } else {
                    cout << "Error: Division by zero!" << endl;
                    return 1;
                }
            }
            break;
        case 'sqrt':
            result = sqrt(operands[0]);
            break;
        case 'sin':
            result = sin(operands[0]);
            break;
        case 'cos':
            result = cos(operands[0]);
            break;
        case 'tan':
            result = tan(operands[0]);
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
            return 1;
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}
