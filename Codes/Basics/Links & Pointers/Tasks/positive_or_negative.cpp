#include <iostream>

using namespace std;

int main() {

	int number;
	cout << "Enter number: ";
	cin >> number;

	int* ptr = &number;

	cout << (*ptr > 0 ? "+" : (*ptr < 0 ? "-" : "zero"));

	return 0;
}