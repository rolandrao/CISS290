/* Roland Rao
Exercise 5-1 main
This program will instantiate a rectangle object
*/
#include<iostream>
#include"/Users/rolandrao/Documents/CISS290/Header Files/rectangle5-5.h"
using namespace std;

int main(){
  float len, wid;
  cout << "Enter Length: ";
  cin >> len;
  cout << "Enter Width: ";
  cin >> wid;
  rectangle55 r(len,wid);
  cout << "Rectangle" << endl;
  r.print();
}
