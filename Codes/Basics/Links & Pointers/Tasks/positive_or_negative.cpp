#include <iostream>
using namespace std;

int main() {

	int a;
	int b;

	cout << "Enter number a: ";
	cin >> a;
	cout << "Enter number b: ";
	cin >> b;

	int* ptrA = &a;
	int* ptrB = &b;

	cout << (*ptrA > *ptrB ? *ptrA : *ptrB);

	return 0;
}