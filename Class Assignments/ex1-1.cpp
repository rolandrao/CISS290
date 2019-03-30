#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	int f;
	float c;

	cout.setf(ios::fixed|ios::showpoint);

	cout<<"Enter a temperature in fahrenheit: ";

	cin>>f;
	cin>>c;

	c = 1.55555;

	cout<<"Temperature in celsius: " << setprecision(3) << c << endl;



}
