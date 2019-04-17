/* Bill Wohlleber
Exercise 6-1
This program will create a movie vector
*/
#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>
#include"/Users/rolandrao/Documents/CISS290/Header Files/movie6-2.h"
using namespace std;

int main()
{
	string name;
	int ans, pos,year;
	bool found = false;
	list<movie62> vm;// declare vector of string called vm
	list<movie62>::iterator vmit;	// declare vector iterator called vmit
	ostream_iterator<movie62> osit(cout, "\n");								// declare iterator to cout
	cout << "Enter movie name (-1 to end):  ";
	getline(cin, name, '\n');
	while (name != "-1")
	{
		cout << "Enter movie year: ";
		cin >> year;
		m = movie62(name,year);
		vm.push_back(m);							// add at end
		cin.ignore(1,'\n');
		cout << "Enter movie name (-1 to end):  ";
		getline(cin, name, '\n');
	}
	cout << "Enter movie name to search for:  ";
	getline(cin, name, '\n');
	for(vmit = vm.begin(); vmit != vm.end(); vmit++){
			if(*vmit.getname() == name){
				cout << "Movie" << *vmit << " is in vector\n";
				found = true;
				break;
			}

	}
	if(!found){
		cout << "Movie not in vector\n";
	}

	for(vmit = vm.begin(); vmit != vm.end(); vmit++){
		cout << *vmit << endl;
	}

		cout << "Enter 1 to insert, 2 to delete, or 3 to exit:  ";
	cin >> ans;
	if (ans == 1)
	{
		cout << "Enter position to insert:  ";
		cin >> pos;
		cout << "Enter movie name:  ";
		cin.ignore(1, '\n');
		getline(cin, name, '\n');
		vmit = vm.begin()+pos;// move up
		vm.insert(vmit,name);// add at that spot
	}
	else if (ans == 2)
	{
		cout << "Enter position to delete:  ";
		cin >> pos;
		vmit = vm.begin()+pos;								// move up
		vm.erase(vmit);								// delete at that spot
	}

	cout << "You have " << vm.size() <<  " movies in vector\n"; // print number of movies
	copy(vm.begin(),vm.end(),osit);									// copy to output stream
}
