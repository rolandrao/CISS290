/* Roland Rao
 * Project
 * This program will check if a c-string is a palindrome
 */
#include<iostream>
#include<cstdlib>
#include<string.h>
#include<stdio.h>
#include<cstring>
using namespace std;



bool sameflipped(char[], int);


int main(){
	char sentence[80], nospace[80] = "\0", *ptr,*locptr;
	cout << "Enter a sentence: ";
	int length;
	cin.getline(sentence, sizeof(sentence), '\n');
	for(int i = 0; i < strlen(sentence); i++){
		sentence[i] = tolower(sentence[i]);
	}
	ptr = strtok(sentence, " .,+?!");
	while(ptr != '\0'){
		strcat(nospace,ptr);
		ptr = strtok('\0'," .,+?!");

	}
	length = strchr(nospace, '\0')-nospace;
	//for(int i = 0; i < strlen(nospace); i++){
	//	if(strcmp(nospace[i],"\0") == 0){
	//		length = i;
	//		break;
	//	}
	//}

	char backwards[length];
	if(sameflipped(nospace,length)){
		cout << nospace << endl;
		cout << "The sentence is a palindrome" << endl;
	}else{
		cout << nospace << endl;
		cout << "The sentence is not a palindrome" << endl;
		
	
	
	}
}


bool sameflipped(char nospace[],int l){
	
	char back[l];
	for(int i = 0,j = l-1; i < l ; i++,j--){
		back[i] = nospace[j];
	}
	
	back[l] = '\0';

	if(strcmp(back,nospace) == 0){
		return true;
	}
	return false;	
}




