/* Roland Rao
Exercise 5-6b main
This program will instantiate a rectangle object
*/
#include<iostream>
#include"/Users/rolandrao/Documents/CISS290/Header Files/rectangle5-8a.h" // include interface
#include"/Users/rolandrao/Documents/CISS290/Header Files/cube5-8a.h"
using namespace std;

int main(){
  rectangle58a r;
  cube58a c;
  r.setlength(20);
  r.setwidth(10);
  r.calcarea();
  r.calcperimeter();

  c.setlength(10);
  c.setwidth(5);
  c.setdepth(3);
  c.calcarea();
  c.calcperimeter();

  cout << "Rectangle\n";
  cout << "Length = " << r.getlength() << endl;
  cout << "Width = " << r.getwidth() << endl;
  cout << "Area = " << r.getarea() << endl;
  cout << "Perimeter = " << r.getperimeter() << endl;

  cout << "Cube\n";
  cout << "Length = " << c.getlength() << endl;
  cout << "Width = " << c.getwidth() << endl;
  cout << "Area = " << c.getarea() << endl;
  cout << "Perimeter = " << c.getperimeter() << endl;
  cout << "Depth = " << c.getdepth() << endl;





}
