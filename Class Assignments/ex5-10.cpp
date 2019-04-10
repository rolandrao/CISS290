/* Roland Rao
Exercise 5-10
This program will create two rectangles and add and compare them
*/

#include<iostream>
#include"/Users/rolandrao/Documents/CISS290/Header Files/rectangle5-10.h"

using namespace std;

int main(){
  rectangle510 r1(20,10), r2(10,5);
  float sum,dif;
  cout << "Rectangle 1:" << endl;
  r1.print();
  cout << "Rectangle 2:" << endl;
  r2.print();

  sum = r1 + r2;
  cout << "\nSum of sides is " << sum << endl;
  dif = r1-r2;
  cout << "Difference of sides is " << sum << endl;

  if(r1<r2){
    cout << "\nr1 has a smaller area" << endl;
  }else if(r1>r2){
    cout << "\nr1 has a larger area" << endl;
  }else if(r1 == r2){
    cout << "\nr1 and r2 have the same area" << endl;
  }

}
