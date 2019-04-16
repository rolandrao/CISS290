/* Bill Wohlleber
Exercise 6-1
This program will create a movie vector
*/
#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>
using namespace std;

void main()
{
	string name;
	int ans, pos;
	bool found = false;
									// declare vector of string called vm
									// declare vector iterator called vmit
									// declare iterator to cout
	cout << "Enter movie name (-1 to end):  ";
	getline(cin, name, '\n');
	while (name != "-1")
	{
									// add at end
		cout << "Enter movie name (-1 to end):  ";
		getline(cin, name, '\n');
	}
	cout << "Enter movie name to search for:  ";
	getline(cin, name, '\n');
									// iterate loop
									// search for name
		{
			cout << "Movie " << *vmit << " is in vector\n";
			found = true;
			break;
		}
	if (!found)
		cout << "Movie not in vector\n";

								// iterate
								// print
		cout << "Enter 1 to insert, 2 to delete, or 3 to exit:  ";
	cin >> ans;
	if (ans == 1)
	{
		cout << "Enter position to insert:  ";
		cin >> pos;
		cout << "Enter movie name:  ";
		cin.ignore(1, '\n');
		getline(cin, name, '\n');
										// move up
										// add at that spot
	}
	else if (ans == 2)
	{
		cout << "Enter position to delete:  ";
		cin >> pos;
										// move up
										// delete at that spot
	}

	cout << "You have " << " movies in vector\n"; // print number of movies
										// copy to output stream
}