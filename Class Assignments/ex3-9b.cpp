/* Bill Wohlleber
Exercise 3-9b
This program will print a line of text in uppercase and lowercase
character by character using strings
*/
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
	string s, su, sl;
	int i;
	cout << "Enter a line of text:  ";
	getline(cin, s, '\n');
	su.resize(s.length());
	for (i = 0; i < s.length(); i++)
		su.at(i) = toupper(s.at(i));
	cout << su << endl;
	if (s > su)
		cout << s << " is some lowercase\n";
	i = 0;
	sl.resize(s.length());
	for (i = 0; i < s.length(); i++)
		su.at(i) = tolower(s.at(i));
	cout << sl << endl;
	if (s < sl)
		cout << s << " is some uppercase\n";
}