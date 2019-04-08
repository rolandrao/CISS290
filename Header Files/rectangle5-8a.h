#pragma once
/* Roland Rao
Exercise 5-8 Header File
This class will define a rectangle
*/

#ifndef rectangle5-8a_h
#define rectangle5-8a_h

class rectangle58a {
protected:
  float length;
  float width;
  float area;
  float perimeter;

public:
  rectangle58a()
  {
    length = 1;
    width = 1;
    area = 1;
    perimeter = 4;
  }
  void setlength(float l){
    length = l;
  }
  void setwidth(float w){
    width = w;
  }
  void calcarea(){
    area = length*width;
  }
  void calcperimeter() {
    perimeter = 2*(length+width);
  }

  float getlength(){
    return length;
  }

  float getwidth(){
    return width;
  }

  float getarea(){
    return area;
  }

  float getperimeter(){
    return perimeter;
  }
};

#endif
