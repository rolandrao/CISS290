/* Roland Rao
Exercise 5-8b sub
This class will define a colorectangle class
*/

#include"/Users/rolandrao/Documents/CISS290/Header Files/rectangle5-12.h"
#include<iostream>
#include<cstring>

using namespace std;

class colorrectangle512 : public rectangle512
{
private:
  char color[20];


public:

  colorrectangle512() : rectangle512()
  {
    strcpy(color, "Blue");

  }

  colorrectangle512(float l, float w, const char c[]) : rectangle512(l,w)
  {
    strcpy(color,"Blue");

  }

  void print(){
    rectangle512::print();
    cout << "Color is " << color << endl;
  }


};
