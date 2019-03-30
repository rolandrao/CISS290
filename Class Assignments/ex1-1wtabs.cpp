#include<iostream>
#include<iomanip>
using namespace std;


int main(){
	int f;
	float c;
	cout.setf(ios::fixed|ios::showpoint);
	cout<<"Fahrenheit\t\tCelsius\n";
	for(f =  0; f < 212; f++){
		c = (f-32)*5/9.0;
		cout<<f << "\t\t\t" << setprecision(3) << c << endl;
	}
}


