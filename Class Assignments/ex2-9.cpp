#include<iostream>
using namespace std;

int gcd(int,int); // function prototype




int main(){
	int num1,num2;
	cout << "Enter two integers: ";
	cin >> num1 >> num2;
	int answer = gcd(num1,num2);
	cout << answer << endl;
	return 0;
}


int gcd(int n1,int n2){
	int i, small;
	if(n1<n2){
		small = n1;
	}else if(n2<n1){
		small = n2;
	}else{
		return n1;
	}

	for(i = small; i>=2; i--){
		if(n1%i == 0 && n2%i == 0){
			return i;
		}
	}
	return 1;

}
