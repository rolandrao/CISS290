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

int main()
{
	string name;
	int ans, pos;
	bool found = false;
	vector<string> vm;// declare vector of string called vm
	vector<string>::iterator vmit;	// declare vector iterator called vmit
	ostream_iterator<string> osit(cout, "\n");								// declare iterator to cout
	cout << "Enter movie name (-1 to end):  ";
	getline(cin, name, '\n');
	while (name != "-1")
	{
		vm.push_back(name);							// add at end
		cout << "Enter movie name (-1 to end):  ";
		getline(cin, name, '\n');
	}
	cout << "Enter movie name to search for:  ";
	getline(cin, name, '\n');
	for(vmit = vm.begin(); vmit < vm.end(); vmit++){
			if(*vmit == name){
				cout << "Movie" << *vmit << " is in vector\n";
				found = true;
				break;
			}

	}
	if(!found){
		cout << "Movie not in vector\n";
	}

	for(vmit = vm.begin(); vmit < vm.end(); vmit++){
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
