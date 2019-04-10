/* Roland Rao
Exercise 5-8b sub
This class will define a cube class
*/

#include"/Users/rolandrao/Documents/CISS290/Header Files/rectangle5-12.h"
#include<iostream>
using namespace std;

class cube512 : public rectangle512
{
private:
  float depth;


public:

  cube512(float l, float w, float d) : rectangle512(l,w), depth(d)
  {
      area = 2*length*width+2*length*depth+2*width*depth;

      perimeter = 2*(length+width)+2*(length+depth) + 2*(width+depth);

  }

  void print(){
    rectangle512::print();
    cout << "Depth = " << depth << endl;
  }


};
