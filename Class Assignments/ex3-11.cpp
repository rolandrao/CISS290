/* Roland Rao
 * Exercise 3-11
 * This program will input ofur cstrings of digits, convert to integers
 */
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main(){
	char s[11];
	int i,j,sum = 0;
	bool digit = true;
	for(i = 1; i <= 4; i++){
		digit = true;
		cout << "Enter a cstring of digits: ";
		cin.getline(s, sizeof(s), '\n');
		for(j = 0; j < strlen(s); j++){
			if(!isdigit(s[j])){
				digit = false;
			}
		}
		if(digit){
			sum+= atoi(s);
		}else{
			cout << "Invalid input\n";
			i--;
		}
	}
	cout << "\nSum is: " << sum << endl;
}
22.682
