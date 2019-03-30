/* Roland Rao
 * Exercise 3-4
 * This program will input cstrings
 */

#include<iostream>
using namespace std;


int main(){
	char name[30], letgrade, course[30];
	cout << "Enter name: ";
	cin.getline(name,sizeof(name),'\n');

	cout << "Enter the grade: ";
	cin >> letgrade;
	cin.ignore(80,'\n');
	cout << "Enter course name: ";
	cin.getline(course,sizeof(course),'\n');

	
	cout << "Name is: " << name << endl;
	cout << "Letter grade is: " << letgrade << endl;
	cout << "Course name is: " << course << endl;
}
