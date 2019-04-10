/* Roland Rao
Exercise 4-13b
This program will make a student structure
*/
#include<iostream>
#include"/Users/rolandrao/Documents/CISS290/Header Files/student5-13.h"
#include<fstream>
#include<string>
using namespace std;

void label(student[], int);

//void printOut(ofstream,student);

int main(){
  string file;
  student s[2];
  char first[15], last[20], street[30],city[30],state[3],zip[3];
  int year;
  address home;

  file = "gradesout.txt";

  for (int i; i < 2; i++ ) {

    cout << "Enter Student First Name: ";
    cin >> first;
    s[i].setfirst(first);
    cout << "Enter Student Last Name: ";
    cin.ignore(1, '\n');
    cin >> last;
    s[i].setlast(last);
    cout << "Enter Street Address: ";
    cin.ignore(1, '\n');
    cin.getline(street, sizeof(street), '\n');
    cout << "Enter City: ";
    cin.getline(city, sizeof(city), '\n');
    cout << "Enter State Abbreviation: ";
    cin >> state;
    cout << "Enter Zip Code: ";
    cin.ignore(1, 'n');
    cin >> zip;
    cout << "Enter Class Year: ";
    cin >> year;
    address a;
    a.setstreet(street);
    a.setcity(city);
    a.setstate(state);
    a.setzip(zip);
    s[i].sethome(a);

  }

  label(s,2);
  //printOut(file,s[0]);
  //printOut(file,s[1]);


  }
  






void label(student *s, int n){
  student *slimit;
  slimit = s+n;
  while(s < slimit){
    cout << "\n\n";
    cout << s->getfirst() << " " << s->getlast() << " " << s->getyear() << endl;
    cout << s->gethome().getstreet() << endl;
    cout << s->gethome().getcity() << " " << s->gethome().getstate() << " " << s->gethome().getzip() << endl;
    s++;
    }
}
