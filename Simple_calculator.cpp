#include <iostream>
using namespace std;

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divideNumbers(double a, double b);

int main() {
    char op;
    double num1, num2;

    cout << "===== Simple Calculator =====" << endl;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\nChoose an operation:" << endl;
    cout << "+  : Addition" << endl;
    cout << "-  : Subtraction" << endl;
    cout << "*  : Multiplication" << endl;
    cout << "/  : Division" << endl;
    cout << "Enter operator: ";
    cin >> op;

    cout << endl;

    switch (op) {
        case '+':
            cout << "Result: " << add(num1, num2);
            break;

        case '-':
            cout << "Result: " << subtract(num1, num2);
            break;

        case '*':
            cout << "Result: " << multiply(num1, num2);
            break;

        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed.";
            } else {
                cout << "Result: " << divideNumbers(num1, num2);
            }
            break;

        default:
            cout << "Invalid operator selected.";
    }

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divideNumbers(double a, double b) {
    return a / b;
}
