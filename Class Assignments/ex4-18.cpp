/* Roland Rao
Exercise 4-18
This program will convert fahrenheit to celsius in a table
Input the starting and ending fahrenheits for the loop
In loop - field widths, 3 decs for cel, leading 0s, showpos for cel
*/
#include<stdio.h>

int main(){
  int fah, f1, f2;
  float cel;
  printf("Enter the starting and ending fahrenheit values\n");
  scanf("%d%d",&f1,&f2);
  printf("\n\n%s%12s\n", "Fahrenheit", "Celsius");
  for(fah = f1; fah <= f2; fah++){
    cel = (fah-32) * 5 / 9.0;
    printf("%6d%0+16.3f\n",fah,cel);
  }


}
