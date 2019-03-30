#include<iostream>
using namespace std;

int valneg(int);
void pointneg(int *);
void refneg(int &);

int main() {
	int num1, num2, num3;
	cout << "Enter an integer to negate by value: ";
	cin >> num1;
	num1 = valneg(num1);
	cout << "The value of num1 in main is " << num1 << endl;
	
	cout << "Enter an integer to negate by pointer: ";
	cin >> num2;
	pointneg(&num2);
	cout << "The value of num2 in main is " << num2 << endl;
	

	cout << "Enter an integer to negate by reference: ";
	cin >> num3;
	refneg(num3);
	cout << "The value of num3 in main is: " << num3 << endl;

}


int valneg(int n){
	return -n;
}

void pointneg(int *nptr){
	*nptr = -*nptr;
}

void refneg(int &nn){
	nn = -nn;
}


