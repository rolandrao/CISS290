/* Roland Rao
Exercise 4-13b
This program will make a student structure
*/
#include<iostream>
#include"/Users/rolandrao/Documents/CISS290/Header Files/student4-13.h"
#include<fstream>
#include<string>
using namespace std;

void label(student[], int);

//void printOut(ofstream,student);

int main(){
  string file;
  student s[2];
  file = "gradesout.txt";

  for (int i; i < 2; i++ ) {

    cout << "Enter Student First Name: ";
    cin >> s[i].first;
    cout << "Enter Student Last Name: ";
    cin.ignore(1, '\n');
    cin >> s[i].last;
    cout << "Enter Street Address: ";
    cin.ignore(1, '\n');
    cin.getline(s[i].home.street, sizeof(s[i].home.street), '\n');
    cout << "Enter City: ";
    cin.getline(s[i].home.city, sizeof(s[i].home.city), '\n');
    cout << "Enter State Abbreviation: ";
    cin >> s[i].home.state;
    cout << "Enter Zip Code: ";
    cin.ignore(1, 'n');
    cin >> s[i].home.zip;
    cout << "Enter Class Year: ";
    cin >> s[i].year;

  }

  label(s,2);
  printOut(file,s[0]);
  printOut(file,s[1]);


  }






void label(student *s, int n){
  student *slimit;
  slimit = s+n;
  while(s < slimit){
    cout << "\n\n";
    cout << s->first << " " << s->last << " " << s->year << endl;
    cout << s->home.street << endl;
    cout << s->home.city << " " << s->home.state << " " << s->home.zip << endl;
    s++;
    }
}
