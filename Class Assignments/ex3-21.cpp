/* Roland Rao
 * Exercise 3-21
 * This porgram will take a substring but use a try block to check the range is inside the cstring
 */
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char sent[50], subsent[30], *csptr;
	int index, len;
	cout << "Enter a sentence: ";
	cin.getline(sent,sizeof(sent), '\n');
	cout << "Enter starting spot: ";
	cin >> index;
	cout << "Enter the length: ";
	cin >> len;

	try{
		if(index < 0 || index >= strlen(sent)){
			throw index;
		}
		if(index+len > strlen(sent)){
			throw index + len;
		}
		csptr = &sent[index];
		strncpy(subsent,csptr,len);
		subsent[len] = '\0';
		cout << "Substring is " << subsent << endl;
	}
	catch (int ex)
	{
		cout << "Index " << ex << " iof substring out of range\n";
	}
}
