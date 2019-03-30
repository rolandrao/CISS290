/* Roland Rao
 * Exercise 2-13
 * This program will use a function template to find the maximum value of three arguments no matter what the type
 */

#include<iostream>
using namespace std;

template<class T>
T max (T, T, T);

int main(){
	int int1,int2,int3,imax;
	float fp1,fp2,fp3,fmax;
	char ch1,ch2,ch3,cmax;

	cout << "Enter three integers: ";
	cin >> int1 >> int2 >> int3;
	imax = max(int1,int2,int3);
	cout << "The max integer is: " << imax << endl;

	cout << "Enter three floats: ";
	cin >> fp1 >> fp2 >> fp3;
	fmax = max(fp1,fp2,fp3);
	cout << "The max float is: " << fmax << endl;

	cout << "Enter three chars: ";
	cin >> ch1 >> ch2 >> ch3;
	cmax = max(ch1,ch2,ch3);
	cout << "The max char is: " << cmax << endl;
	return 0;
}

template<class T>

T max(T val1, T val2, T val3){
	T vmax = val1;
	if (val2 > vmax){
		vmax = val2;
	}
	if(val3 > vmax){
		vmax = val3;
	}

	return vmax;



}



