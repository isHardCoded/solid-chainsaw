#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;

	cout << "Enter a: ";
	cin >> a;
	cout << endl;
	cout << "Enter b: ";
	cin >> b;

	int* ptrA = &a;
	int* ptrB = &b;

	cout << (*ptrA > *ptrB ? *ptrA : *ptrB);
}
