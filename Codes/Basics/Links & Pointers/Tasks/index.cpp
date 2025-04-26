#include <iostream>
using namespace std;

int main()
{
// 1. создать переменную и выаести ее адрес
	int number = 187;
	cout << "Address number: " << &number << endl;
// 2. создать указатель и изменить значение через него
	int* ptr = &number;
	*ptr = 297;
// 3. создать ссылку и убедиться, что изменения влияют на оригинал
	int& n = number;
	n = 1250;
	cout << "Value number: " << number << endl;
}