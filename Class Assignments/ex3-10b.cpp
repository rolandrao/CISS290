/* Roland Rao
 * Ex 3-10b
 * 2/23/19
 * This program will input 3 strings and check if they end in es or start with yan
 */

#include<iostream>
#include<iomanip>
#include<cstring>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;

string strings[3];

void input();

void checkString();

int main()
{
	input();
	cout << "\n";
	checkString();

	return 0;

}

void input(){
	for(int i = 0; i < 3; i++){
		cout << "Enter string number " << i+1 << ": ";
		cin >> strings[i];
		for(int j = 0; j < strings[i].length(); j++){
			strings[i][j] = tolower(strings[i][j]);
		}		
	}
}


void checkString(){
	for(int i = 0; i < 3; i++){
		if(strings[i].substr(0,3) == "yan" || strings[i].substr(strings[i].length()-2,2) == "es"){
			cout << strings[i] << endl;
		}	
	}
}

