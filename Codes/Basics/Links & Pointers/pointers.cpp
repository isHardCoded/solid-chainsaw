#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int* ptr = &a;

	cout << "Address a: " << ptr << endl;
	cout << "Value a: " << *ptr << endl;

	*ptr = 10;
	cout << a << endl;
}
