/* Roland Rao
Exercise 5-8b sub
This class will define a cube class
*/

#include"/Users/rolandrao/Documents/CISS290/Header Files/rectangle5-8b.h"
#include<iostream>
using namespace std;

class cube58b : public rectangle58b
{
private:
  float depth;


public:
  
  cube58b(float l, float w, float d) : rectangle58b(l,w), depth(d)
  {
      area = 2*length*width+2*length*depth+2*width*depth;

      perimeter = 2*(length+width)+2*(length+depth) + 2*(width+depth);

  }

  void print(){
    rectangle58b::print();
    cout << "Depth = " << depth << endl;
  }


};
