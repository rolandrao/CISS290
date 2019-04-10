#pragma once
/* Roland Rao
Exercise 5-10 Header File
This class will define a rectangle
*/
#ifndef rectangle510_h
#define rectangle510_h

#include<iostream>
using namespace std;

class rectangle510 {
protected:
  float length;
  float width;
  float area;
  float perimeter;

public:
  rectangle510(float l, float w)
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

  float operator+(rectangle510 r){
    float total;
    total = length+width + r.length + r.width;
    return total;
  }

  float operator-(rectangle510 r){
    float total;
    total = length+width - r.length - r.width;
    return total;
  }

  bool operator>(rectangle510 r){
    return area > r.area;
  }
  bool operator<(rectangle510 r){
    return area < r.area;
  }

  bool operator==(rectangle510 r){
    return area == r.area;
  }

};

#endif
