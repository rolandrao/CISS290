/* Roland Rao
Exercise 5-6b implementation
This resource will implement a rectangle5
*/
#include<iostream>
#include"/Users/rolandrao/Documents/CISS290/Header Files/rectangle5-6b.h"
using namespace std;


rectangle56b::rectangle56b() : length(1), width(1), area(1), perimeter(4)
{
  // initialize all data fields
}

rectangle56b::rectangle56b(float l, float w) : length(l), width(w)
  {
    area = length * width;
    perimeter = 2*(length+width);
  }

void rectangle56b::print(){
    cout << "Length is " << length << endl;
    cout << "Width is " << width << endl;
    cout << "Area is " << area << endl;
    cout << "Perimeter is " << perimeter << endl;
  }
  ~rectangle56b(){

  }
};
