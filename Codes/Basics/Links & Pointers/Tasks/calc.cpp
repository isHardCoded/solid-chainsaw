#include <iostream>
using namespace std;

double add(double* a, double* b) {
  return *a + *b;
}

double subtract(double* a, double* b) {
  return *a - *b;
}

double multiply(double* a, double* b) {
  return *a - *b;
}

double divide(double* a, double* b) {
  return *a / *b;
}

int main() {

    setlocale(LC_ALL, "RU");

    double a;
    double b;
    char operation;

    cout << "Enter two numbers and operation: ";
    cin >> a >> operation >> b;

    double* ptrA = &a;
    double* ptrB = &b;

    double result = 0;

    switch (operation) {
    case '+':
        result = add(ptrA, ptrB);
        break;
    case '-':
        result = subtract(ptrA, ptrB);
        break;
    case '*':
        result = multiply(ptrA, ptrB);
        break;
    case '/':
        if (*ptrB != 0) result = divide(ptrA, ptrB);
        else cout << "DivideByZeroException";
        break;
    default:
        cout << "Error";
        return 1;
    }
    cout << "Result: " << result;
    return 0;
}