#pragma once
/* Roland Rao
Exercise 5-1 Header File
This class will define a rectangle
*/
#ifndef rectangle512_h
#define rectangle512_h

#include<iostream>
using namespace std;

class rectangle512 {
protected:
  float length;
  float width;
  float area;
  float perimeter;

public:
  rectangle512(float l, float w)
  {
    length = l;
    width = w;
    area = length * width;
    perimeter = 2*(length+width);
  }

  void virtual print(){
    cout << "Length is " << length << endl;
    cout << "Width is " << width << endl;
    cout << "Area is " << area << endl;
    cout << "Perimeter is " << perimeter << endl;
  }
  ~rectangle512(){

  }
};

#endif
