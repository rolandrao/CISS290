#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float miles, gallons,mpg;
	cout<<"Enter the number of miles: ";
	cin>>miles;
	cout<<"\nEnter the number of gallons: ";
	cin>>gallons;
	cout<<endl;
	cout.setf(ios::fixed|ios::showpoint);
	mpg = miles/gallons;
	cout<<"MPG: "<<setprecision(1)<<mpg<<endl;

}
