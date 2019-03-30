/* Roland Rao
 * Exercise 3-21
 * This porgram will take a substring but use a try block to check the range is inside the cstring
 */
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include<iostream>
#include<string>
using namespace std;

int main(){
	string sent,subsent;
	int index, len;
	cout << "Enter a sentence: ";
	cin.getline(sent,sizeof(sent));
	cout << "Enter starting spot: ";
	cin >> index;
	cout << "Enter the length: ";
	cin >> len;

	try{
		subsent = sent.substr(index,len);	
		cout << "Substring is " << subsent << endl;
	}
	catch (out_of_range ex)
	{
		cout << "Substring out of range\n";
		cout << ex.what() << endl;		
	}
}

