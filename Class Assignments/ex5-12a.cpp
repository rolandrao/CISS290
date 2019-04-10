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
  rectangle512 r[3];
    // = {rectangle512(20,10),rectangle512(10,5),rectangle512(150,10)}

  r[0] = rectangle512(20.0,10.0);
  r[1] = rectangle512(10.0,5.0);
  r[2] = rectangle512(15.0,10.0);

  for(int i = 0; i < 3; i++){
    r[i].print();
    cout << endl;


  }

}
