/* Roland Rao
Exercise 5-8a sub
This class will define a cube class
*/

#include"/Users/rolandrao/Documents/CISS290/Header Files/rectangle5-8a.h"
#include<iostream>
using namespace std;

class cube58a : public rectangle58a
{
private:
  float depth;


public:
  cube58a() : rectangle58a()
  {
    depth = 1;
    area = 6;
    perimeter = 12;
  }

  void setdepth(float d){
    depth = d;
  }

  void calcarea(){
    area = 2*length*width+2*length*depth+2*width*depth;
  }

  void calcperimeter(){
    perimeter = 2*(length+width)+2*(length+depth) + 2*(width+depth);
  }

  float getdepth(){
    return depth;
  }
};
