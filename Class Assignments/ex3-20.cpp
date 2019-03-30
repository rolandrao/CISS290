/* Roland Rao
 * Exercise 3-20
 * This program will input ofur cstrings of digits, convert to integers
 */
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cctype>

using namespace std;

int main(){
	char s[11];
	int i,j,sum = 0;
	bool digit = true;
	try{
	for(i = 1; i <= 4; i++){
		digit = true;
		cout << "Enter a cstring of digits: ";
		cin.getline(s, sizeof(s), '\n');
		for(j = 0; j < strlen(s); j++){
			if(!isdigit(s[j])){
				throw s[j];
			}
		}
		if(strlen(s) > 9){
			throw strlen(s);
		}
		
	}
	cout << "\nSum is: " << sum << endl;
	}
	catch(char ex){
		cout << ex << " is not a digit\n";
	}
	catch(int l){
		cout << "Number length of " << l << " is too large\n";
	}
}

