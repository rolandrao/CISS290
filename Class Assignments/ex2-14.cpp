/* Roland Rao
 * Exercise 2-14
 * This porgram will use overloaded functions to determine the pay of an hourly worker
 */

#include<iostream>
#include<iomanip>
using namespace std;

float pay(float, float);

float pay(float, float, float);


int main(){
	float salary, rate, hours;
	cout.setf(ios::showpoint|ios::fixed);
	cout << "Enter pay rate: ";
	cin >> rate;
	cout << "Enter hours: ";
	cin >> hours;
	if (hours > 40){
		salary = pay(rate, 40, hours-40);
	}else{
		salary = pay(rate, hours);
	}
	cout << "Salary is: " << setprecision(2) << salary << endl;
	return 0;
}

float pay(float r, float hreg)
{
	float sal;
	sal = r*hreg;
	return sal;
}

float pay(float r, float hreg,float hot){
	float sal;
	sal = hreg * r + hot * r*1.5;
	return sal;
}

