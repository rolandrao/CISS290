#include<iostream>
#include<iomanip>
using namespace std;


int main() {
	int f;
	float c;
	cout.setf(ios :: showpoint | ios :: fixed | ios :: right);
	cout<<"Fahrenheit" << setw(12) << "Celsius" << endl;
	for(f = 0; f < 212; f++){
		c = (f-32)*5/9.0;
		cout << setw(4) << f << setw(16) << setfill('.') << setprecision(3) << c << endl;




	}








}
