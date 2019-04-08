#pragma once
/* Roland Rao
Exercise 5-1 Header File
This class will define a rectangle
*/


#ifndef rectangle56b_h // if already included dont define it
#define rectangle56b_h


#include<iostream>
using namespace std;

class rectangle56b {
  // INTERFACE

private:
  float length;
  float width;
  float area;
  float perimeter;

public:
  //rectangle56b();
  rectangle56b(float, float);
  void print();
};

#endif

//implementation
