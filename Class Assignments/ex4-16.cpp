/* Roland Rao
Exercise 4-16
This program will convert fahrenheit to celsius in c
*/
#include<stdio.h>


int main(){
  int fah;
  float cel;
  printf("Enter fahrenheit temperature: ");
  scanf("%d",&fah);
  cel = (fah-32)*5/9.0;
  printf("Temperature in Celsius is %.3f\n", cel);
  
}
