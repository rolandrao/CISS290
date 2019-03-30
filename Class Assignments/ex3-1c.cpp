#include<iostream>
#include<iomanip>
using namespace std;

void input(int[], int);

int testsum(int[],int);

void output(int[],int);

int main(){
	int tests[4],sum = 0, i, j, k;
	float avg;
	int length = sizeof(tests) / sizeof(int);
	cout.setf(ios::showpoint | ios::fixed);
	
	input(tests,length);
	sum = testsum(tests,length);
	cout << "Average is " << setprecision(1) << tests << endl;
	output(tests,length);
	cout << "Address of array tests is: " << tests << endl;
	return 0;

}


void input(int t[], int n){
	int i;
	for(i = 0; i < n; i ++){
		cout << "Enter test grade: ";
		cin >> t[i];
	}
}

int testsum(int t[], int n){
	int j;
	int sum = 0;
	for(j = 0; j < n; j++){
		sum += t[j];
	}
	return sum;
}

void output(int t[], int n){
	for(int k = 0; k < n; k++){
		cout << k << setw(7) << t[k] << setw(12) << &t[k] << endl;
		cout << "Addres of array t is: " << t << endl;

	}

}
