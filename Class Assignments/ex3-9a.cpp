/* Bill Wohlleber
Exercise 3-9a2
This program will print a line of text in uppercase and lowercase
character by character using c-strings
*/
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main()
{
	char s[50], su[50], sl[50];
	char *sptr = s;	// set up pointer to increment through s array
	int i = 0;
	cout << "Enter a line of text:  ";
	cin.getline(s, sizeof(s), '\n');
	char *limitptr = sptr+sizeof(s);
			// change to while loop comparing pointer addresses
			/* address in new pointer is less than address strlen
				memory spots over from beginning of s array */
	while(sptr < limitptr){
		su[i] = toupper(*sptr);
		i++;
		sptr++;
	}
		 	// access s using pointer, keep su in array notation with i
	su[i] = '\0';
	cout << endl << su << endl;
	if (strcmp(s, su) > 0)
		cout << s << " is some lowercase\n";
	sptr = s;
			// change to while loop comparing pointer addresses
	i = 0;
	while(sptr < limitptr){
		sl[i] = tolower(*sptr);
		i++;
		sptr++;
	}
	sl[i] = '\0';
	cout << endl << sl << endl;
	if (strcmp(s, sl) < 0)
		cout << s << " is some uppercase\n";
	return 0;
}
