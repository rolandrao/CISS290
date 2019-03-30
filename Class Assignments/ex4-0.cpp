#include<iostream>
using namespace std;

int main() {
	int num1, num2, num3;
	int *ptr;
	cout << "Enter an integer to negate by pointer: ";
	cin >> num2;
	ptr = &num2;
	*ptr = -num2;
	cout << "The value of num2 is " << num2 << endl;
	cout << "The value ptr is pointing at is " << *ptr << endl;
	cout << "The value of the address in ptr  is " << ptr << endl;
	cout << "The address of num2 is " << &num2 << endl;
	cout << "The address of ptr is " << &ptr << endl;


}
