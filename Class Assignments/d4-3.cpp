/* d4-3.cpp
This program will print the address, contents, and what
a pointer is pointing at.
Change cout statements to print what label says to print
*/
#include<iostream>
using namespace std;

void printp(int*);  // make argument a pointer
void pointinput(int*); // make argument a pointer

int main() {
	int num;
	cout << "Enter an integer into main's num:  ";
	cin >> num;
	printp(&num);
	cout << "The address of num is " << &num << endl;
    	cout << "The value of num is " << num << endl;
    	pointinput(&num);
	cout << "The address of num is " << &num << endl;
    	cout << "The value of num is " << num << endl;
	return 0;
}

void printp(int *nptr1) {
	cout << "Address of nptr1 accessed from printp is " << &nptr1 << endl;
	cout << "Address of num accessed from printp is " << nptr1 << endl;
	cout << "Value of num accessed from printp is " << *nptr1 << endl;
}

void pointinput(int *nptr2) {
	cout << "Enter an integer into main's num from pointinput:  ";
	cin >> *nptr2;
	cout << "Address of nptr2 accessed from pointinput is " <<  &nptr2 << endl;
	cout << "Address of num accessed from pointinput is " << nptr2 << endl;
	cout << "Value of num accessed from pointinput is " << *nptr2 << endl;
}



