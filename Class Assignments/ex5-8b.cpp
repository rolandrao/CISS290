/* Roland Rao
Exercise 5-6b main
This program will instantiate a rectangle object
*/
#include<iostream>
#include"/Users/rolandrao/Documents/CISS290/Header Files/rectangle5-8b.h" // include interface
#include"/Users/rolandrao/Documents/CISS290/Header Files/cube5-8b.h"
using namespace std;

int main(){
  rectangle58b r(20.0,10.0);
  cube58b c(10.0,5.0,3.0);

  //float len, wid, dep;

  /*cout << "Enter Length: ";
  cin >> len;
  cout << "Enter Width: ";
  cin >> wid;
  cout << "Enter Depth: ";
  cin >> dep;

  c = new Cube(len,wid,dep);
  */

  cout << "Rectangle\n";
  r.print();

  cout << "Cube\n";
  c.print();





}
