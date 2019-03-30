/* Roland Rao
 * Exercise 2-12
 * This Program will use a defulat value to determine the curved value of a class average
 */


#include<iostream>
#include<iomanip>
using namespace std;


float curver(float, float cur = .20);

int main(){
	float avg, avgnew;
	cout.setf(ios::fixed | ios::showpoint);
	cout << "Enter class Average: ";
	cin >> avg;
	if (avg < 85 && avg >= 60){
		avgnew = curver(avg);
	}else if(avg >=85){
		avgnew = curver(avg, .10);
	}else{
		avgnew = curver(avg, .30);
	}
	cout << "Average with curve is: " << setprecision(1) << avgnew << endl;
	return 0;
}

float curver(float av, float cur){
	float avn;
	avn = av + (100-av) * cur;
	return avn;
}
