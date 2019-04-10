#pragma once
#include<fstream>
using namespace std;
/* Roland Rao
Exercise 4-13
This struct will define a student structure
*/



class address {
private:
  char street[30];
  char city[30];
  char state[3];
  char zip[11];
public:
  char *getstreet(){
    return street;
  }

  char *getcity(){
    return city;
  }

  char *getstate(){
    return state;
  }

  char *getzip(){
    return zip;
  }

  void setstreet(char s[30]){
    strcpy(street, s);
  }

  void setcity(char c[30]){
    strcpy(city,c);
  }

  void setstate(char s[3]){
    strcpy(state,s);
  }

  void setzip(char z[11]){
    strcpy(zip,z);
  }

};

class student{
private:
  char first[15];
  char last[20];
  address home;
  int year;
public:
  char *getfirst(){
    return first;
  }

  char *getlast(){
    return last;
  }

  address gethome(){
    return home;
  }

  int getyear(){
    return year;
  }

  void setfirst(char f[15]){
    strcpy(first,f);
  }

  void setlast(char l[20]){
    strcpy(last,l);
  }

  void sethome(address h){
    home = h;
  }

  void setyear(int y){
    year = y;
  }
};

/*void printOut(string path,student s){
  ofstream outfile;
  outfile.open(path);
  outfile << "Student Name: " << s.first << " " << s.last << endl;
  outfile << "Student Address: " << s.home.street << " " << s.home.city << ", " << s.home.state << " " << s.home.zip << endl;
  outfile.close();
}*/
