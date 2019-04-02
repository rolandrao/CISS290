/* Roland Rao
  Exercise 4-15a
  This porgram will define and use a circule
  */

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct circle{
  float radius, diameter, circumference, area;
};

void dimens(circle *);

int main() {
  circle c;
  cout.setf(ios::showpoint | ios::fixed);
  dimens()
}
