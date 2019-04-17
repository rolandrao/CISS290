/* Bill Wohlleber
Exercise 6-1
This program will create a movie vector
*/
#include<iostream>
#include<set>
#include<string>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
	string name;
	int ans, pos,year;
	bool found = false;
	set<string> vm;// declare vector of string called vm
	set<string>::iterator vmit;	// declare vector iterator called vmit
	ostream_iterator<string> osit(cout, "\n");								// declare iterator to cout
	pair<set<string>::iterator, bool> p;

	cout << "Enter movie name (-1 to end):  ";
	getline(cin, name, '\n');
	while (name != "-1")
	{
		p = vm.insert(name);
		if(p.second){
			cout << *p.first << " inserted" << endl;
		}else{
			cout << *p.first << " already exists" << endl;
		}
		cout << "Enter movie name (-1 to end):  " << endl;
		getline(cin, name, '\n');
	}



	cout << "Enter 1 to insert, 2 to delete, or 3 to exit:  ";
	cin >> ans;
	if (ans == 1)
	{
		cout << "Enter movie name: ";
		cin.ignore(1,'\n');
		getline(cin, name, '\n');
		p = vm.insert(name);
		if(p.second){
			cout << *p.first << " inserted" << endl;
		}else{
			cout << *p.first << " already exists" << endl;
		}
	}
	else if (ans == 2)
	{
		cout << "Enter movie name to delete:  ";
		cin.ignore(1,'\n');
		getline(cin,name,'\n');
		vmit = vm.find(name);
		if(vmit != vm.end()){
			cout << *vmit << " erased\n";
			vm.erase(name);
		}
	}

	cout << "You have " << vm.size() <<  " movies in set\n"; // print number of movies
	copy(vm.begin(),vm.end(),osit);									// copy to output stream
}
