#include <iostream>
using namespace std;

#define MAX_SIZE 100 // Maximum size of the stack

class Stack {
private:
    int top; // Index of the top element
    int arr[MAX_SIZE]; // Array to store elements

public:
    // Constructor
    Stack() {
        top = -1; // Initialize top to -1 (empty stack)
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (top == MAX_SIZE - 1) { // Check if stack is full
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value; // Increment top and add element to the stack
        cout << value << " pushed to stack" << endl;
    }

    // Function to pop an element from the stack
    void pop() {
        if (top == -1) { // Check if stack is empty
            cout << "Stack Underflow!" << endl;
            return;
        }
        cout << arr[top--] << " popped from stack" << endl; // Decrement top and return the popped element
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1; // Stack is empty if top is -1
    }

    // Function to return the top element of the stack without removing it
    int peek() {
        if (top == -1) { // Check if stack is empty
            cout << "Stack is empty!" << endl;
            return -1; // Return -1 if stack is empty
        }
        return arr[top]; // Return the top element
    }
};

int main() {
    Stack stack;

    stack.push(5);
    stack.push(10);
    stack.push(15);

    cout << "Top element: " << stack.peek() << endl;

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop(); // Trying to pop from an empty stack

    return 0;
}
