/* Roland Rao
Exercise 5-1 main
This program will instantiate a rectangle object
*/
#include<iostream>
#include"/Users/rolandrao/Documents/CISS290/Header Files/rectangle5-1.h"
using namespace std;

int main(){
  rectangle51 r;
  float len, wid;
  cout << "Enter Length: ";
  cin >> len;
  cout << "Enter Width: ";
  cin >> wid;
  r.setlength(len);
  r.setwidth(wid);
  r.calcarea();
  r.calcperimeter();
  cout << "Area: " << r.getarea() << endl;
  cout << "Perimeter: " << r.getperimeter() << endl;
}
