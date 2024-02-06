#include <iostream>
using namespace std;

int main() {
    char alphabet;

    // Prompt user to enter an alphabet
    cout << "Enter an alphabet: ";
    cin >> alphabet;

    // Convert the alphabet to uppercase
    alphabet = toupper(alphabet);

    // Check if the input is a valid alphabet (A-Z)
    if(alphabet < 'A' || alphabet > 'Z') {
        cout << "Invalid input! Please enter an alphabet from A to Z." << endl;
        return 1; // Exit the program with an error code
    }

    // Print the star pattern
    for(int i = 0; i <= (alphabet - 'A'); i++) {
        for(int j = 0; j < (alphabet - 'A' - i); j++) {
            cout << " ";
        }
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
