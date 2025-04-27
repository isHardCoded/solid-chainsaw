#include <iostream>

using namespace std;

int main() {

  int a = 5;
  int b = 10;

  int* ptrA = &a;
  int* ptrB = &b;

  int temp = *ptrA;
  *ptrA = *ptrB;
  *ptrB = temp;

  cout << a << endl << b;

  return 0;
}