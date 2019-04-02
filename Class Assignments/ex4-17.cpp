/* Roland Rao
Exercise 4-17
This program will print an ASCII table in different bases
*/
#include<stdio.h>

int main(){
  int x;
  printf("ASCII Values\n");
  printf("%s%12s%10s%16s\n", "Character", "Decimal", "Octal", "Hexadecimal");
  for(x = 48; x <= 122; x++){
    printf("%5c%14d%#12o%#13x\n", x, x, x, x);
  }
}
