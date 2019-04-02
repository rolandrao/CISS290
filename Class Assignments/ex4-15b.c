/* Roland Rao
  Exercise 4-15a
  This porgram will define and use a circule
  */

#include<stdio.h>
#include<math.h>


//using namespace std;

struct circle{
  float radius, diameter, circumference, area;
};

void dimens(struct circle *);

int main() {
  struct circle c;
  dimens(&c);
  //cout.setf(ios::showpoint | ios::fixed);
  printf("%-14s%12.3e\n", "Radius", c.radius);
  printf("%-14s%12.3e\n", "Diameter", c.diameter);
  printf("%-14s%12.3e\n", "Circumference", c.circumference);
  printf("%-14s%12.3e\n", "Area", c.area);

}

void dimens(struct circle *cptr){
  printf("Enter radius: ");
  scanf("%f", &cptr->radius);
  cptr->diameter = 2*cptr->radius;
  cptr->circumference = 2*3.14159*cptr->radius;
  cptr->area = 3.14159 * pow(cptr->radius,2);
}
