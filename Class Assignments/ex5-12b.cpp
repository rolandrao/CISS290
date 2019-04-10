/* Roland Rao
Exercise 5-12a
This program will make a rectangle array
*/
#include<iostream>
#include"/Users/rolandrao/Documents/CISS290/Header Files/rectangle5-12.h"
#include"/Users/rolandrao/Documents/CISS290/Header Files/cube5-12.h"
#include"/Users/rolandrao/Documents/CISS290/Header Files/colorrectangle5-12.h"

using namespace std;

int main(){
  rectangle512 *r[3];
    // = {new rectangle512(20,10),new cube512(10,5,3),new colorrectangle512(150,10,"Blue")}

  r[0] = new rectangle512(20.0,10.0);
  r[1] = new cube512(10.0,5.0,3);
  r[2] = new colorrectangle512(15.0,10.0, "Blue");

  for(int i = 0; i < 3; i++){
    cout << "Address of object is " << r[i] << endl;
    cout << "Address of object is " << *(r+i) << endl;
    cout << "Address of object pointer is " << &r[i] << endl;
    cout << "Address of object pointer is " << r+i << endl;
    (*r[i]).print();
    r[i]->print(); // dynamic binding
    cout << endl;


  }

}
