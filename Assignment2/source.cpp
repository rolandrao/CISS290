/* Roland Rao
 * Assignment 2
 * 2/13/19
 * This program will input 3 cstrings and check if they end in es or start with yan
 */

#include<iostream>
#include<iomanip>
#include<cstring>
#include <stdio.h>
#include <string.h>
using namespace std;

char strings[3][30]; 

char beg[30];
char en[30];

void input();

void checkChar();

int main()
{
	strcpy(beg,"yan");
	strcpy(en,"es");
	input();
	cout << "\n";
	checkChar();

	return 0;

}

void input(){
	for(int i = 0; i < 3; i++){
		cout << "Enter string number " << i+1 << ": ";
		cin.getline(strings[i],sizeof(strings[i]), '\n');
	}
}


void checkChar(){
	for(int i = 0; i < 3; i++){
		if(strncmp(strings[i],beg,3) == 0){
			cout << strings[i];
			cout << "\n";
		}else if(strings[i][strlen(strings[i])-2] == 'e' && strings[i][strlen(strings[i])-1] == 's'){
			cout << strings[i];
			cout << "\n";
		}
		
	}
}
