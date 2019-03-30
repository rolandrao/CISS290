/* Roland Rao
 * Exercise 3-13b
 * This Program will count the number of a certain character in a cstring
 */
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include<iostream>
#include<cstring>
using namespace std;


int main(){
	char sent[50], *sptr,search;
	int count = 0;
	cout << "Enter a sentence: ";
	cin.getline(sent,sizeof(sent), '\n');

	cout << "Enter a character to search for: ";
	cin >> search;

	sptr = strchr(sent, search);
	while(sptr != '\0'){
		count++;
		sptr = strchr(sptr+1, search);
	}

	cout << "The total number of occurances was: " << count << endl;

}



