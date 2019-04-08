/* Roland Rao
Exercise 5-6b main
This program will instantiate a rectangle object
*/
#include<iostream>
#include"/Users/rolandrao/Documents/CISS290/Header Files/rectangle5-6b.h" // include interface
using namespace std;

int main(){
  float len, wid;
  cout << "Enter Length: ";
  cin >> len;
  cout << "Enter Width: ";
  cin >> wid;
  rectangle56b r(len,wid);
  cout << "Rectangle" << endl;
  r.print();
}
