#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "===== SIMPLE CALCULATOR =====" << endl;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Choose operation
    cout << "\nChoose an operation (+, -, *, /): ";
    cin >> operation;

    // Perform calculation
    switch (operation) {
        case '+':
            cout << "Result = " << num1 + num2 << endl;
            break;

        case '-':
            cout << "Result = " << num1 - num2 << endl;
            break;

        case '*':
            cout << "Result = " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 != 0) {
                cout << "Result = " << num1 / num2 << endl;
            } else {
                cout << "Error: Cannot divide by zero!" << endl;
            }
            break;

        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}