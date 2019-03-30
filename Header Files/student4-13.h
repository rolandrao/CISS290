#pragma once
#include<fstream>
using namespace std;
/* Roland Rao
Exercise 4-13
This struct will define a student structure
*/



struct address {
  char street[30];
  char city[30];
  char state[3];
  char zip[11];
};

struct student{
  char first[15];
  char last[20];
  address home;
  int year;
};

void printOut(string path,student s){
  ofstream outfile;
  outfile.open(path);
  outfile << "Student Name: " << s.first << " " << s.last << endl;
  outfile << "Student Address: " << s.home.street << " " << s.home.city << ", " << s.home.state << " " << s.home.zip << endl;
  outfile.close();
}
