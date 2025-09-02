/*this simple calculator program should:
- Ask the user to enter two numbers.
- Ask the user to enter an arithmetic operator (+, -, *, /)
- Perform the operation and display the results.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() { 
    double num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter a second number: ";
    cin >> num2;

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        result = num1 / num2;
    } else {
        cout << "invalid operator!" << endl;
        }

        cout << "Result: " << result << endl;

    return 0;
}