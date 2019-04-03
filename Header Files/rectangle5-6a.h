#pragma once
/* Roland Rao
Exercise 5-1 Header File
This class will define a rectangle
*/

#include<iostream>
using namespace std;

class rectangle56 {
  // INTERFACE

private:
  float length;
  float width;
  float area;
  float perimeter;

public:
  rectangle56();
  rectangle56(float, float);
  void print();
};

//implementation

rectangle56::rectangle56() : length(1), width(1), area(1), perimeter(4)
{
  // initialize all data fields
}

rectangle56::rectangle56(float l, float w) : length(l), width(w)
  {
    area = length * width;
    perimeter = 2*(length+width);
  }

void rectangle56::print(){
    cout << "Length is " << length << endl;
    cout << "Width is " << width << endl;
    cout << "Area is " << area << endl;
    cout << "Perimeter is " << perimeter << endl;
  }
  ~rectangle55(){

  }
};
