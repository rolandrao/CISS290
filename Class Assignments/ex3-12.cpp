/* Roland Rao
 * Exercise 3-12
 * This Program will change an english phrase into Pig Latin
 */
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include<iostream>
#include<cstring>
using namespace std;

void plw(char[]);

int main(){
	char sent[50], *tokenptr;
	cout << "Enter a sentence: ";
	cin.getline(sent,sizeof(sent), '\n');
	tokenptr = strtok(sent, " .,?!;:+");
	while(tokenptr != '\0'){
		plw(tokenptr);
		cout << ' ';
		tokenptr = strtok('\0', " .,?!:;+");
	}
	cout << endl;
	return 0;
}

void plw(char word[]){
	for(int i = 1; i < strlen(word); i++){
		cout << word[i];
	}
	cout << word[0] << "ay";
}
