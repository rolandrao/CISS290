/* Roland Rao
 * Exercise 3-14
 * This program will input and compare two cstrings
 */
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char s1[30], s2[30];
	cout << "Enter cstring: ";
	cin.getline(s1, sizeof(s1), '\n');
	cout << "Enter cstring: ";
	cin.getline(s2, sizeof(s2), '\n');
	if(strcmp(s1,s2) > 0){
		cout << s1 << " is greater than " << s2 << endl;
	}else if(strcmp(s1,s2) < 0){
		cout << s2 << " is greater than " << s1 << endl;
	}else{
		cout << s1 << " and " << s2 << " are the same" << endl;
	}
}
