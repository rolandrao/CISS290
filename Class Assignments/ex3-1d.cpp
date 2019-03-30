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
	avg = (float) sum/length;
	cout << "Average is " << setprecision(1) << avg << endl;
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
	if(n == 1) return t[0];
	else return t[n-1] + testsum(t,n-1);
}

void output(int t[], int n){
	if(n == 1)
		cout << t[0] << endl;
	else{
		cout <<t[0] << "\t";
		output(&t[1],n-1);
	}
}

