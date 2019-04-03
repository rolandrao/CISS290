#pragma once
/* Roland Rao
Exercise 5-1 Header File
This class will define a rectangle
*/

#include<iostream>
using namespace std;

class rectangle55 {
private:
  float length;
  float width;
  float area;
  float perimeter;

public:
  rectangle55(float l, float w)
  {
    length = l;
    width = w;
    area = length * width;
    perimeter = 2*(length+width);
  }

  void print(){
    cout << "Length is " << length << endl;
    cout << "Width is " << width << endl;
    cout << "Area is " << area << endl;
    cout << "Perimeter is " << perimeter << endl;
  }
  ~rectangle55(){

  }
};
