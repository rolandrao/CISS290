/* Roland Rao
Exercise 4-13b
This program will make a student structure
*/
#include<iostream>
#include"student4-13.h"
#include<fstream>
#include<string>
using namespace std;

void printOut(ofstream,student);

int main(){
  string file;
  file = "gradesout.txt";

  student s;
  cout << "Enter Student First Name: ";
  cin >> s.first;
  cout << "Enter Student Last Name: ";
  cin.ignore(1, '\n');
  cin >> s.last;
  cout << "Enter Street Address: ";
  cin.ignore(1, '\n');
  cin.getline(s.home.street, sizeof(s.home.street), '\n');
  cout << "Enter City: ";
  cin.getline(s.home.city, sizeof(s.home.city), '\n');
  cout << "Enter State Abbreviation: ";
  cin >> s.home.state;
  cout << "Enter Zip Code: ";
  cin.ignore(1, 'n');
  cin >> s.home.zip;
  cout << "Enter Class Year: ";
  cin >> s.year;


  printOut(file,s);


}
