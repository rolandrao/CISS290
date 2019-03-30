/* Roland Rao
 Bar Chart Project
 This program will use reference variables to pass three integers to a refrandom funciton. The refrandom function will
 use the memory spots of those three integers to assign random numbers between 1 and 30 to them. It is a void return type
 because the method uses reference variables to change the value in the same memory spot as the ints in main.

 the pointfill method uses the random number for the length of the bar, the character used to fill the bar, and the memory
 spot of the cstring to be filled. A limit pointer is created at the first spot outside of the array and another pointer is
 is set at the first spot of the array and incremented until the limit and each spot is filled with the character passed
  to the function
*/

#include<iostream>
#include<time.h>

using namespace std;

void refrandom(int&,int&,int&);
void pointfill(int,char,char*); // testing the integration of github

int main(){ // sets up the lengths with refrandom, sets up the bars with pointfill and prints out all three


  int l1,l2,l3;
  char bar1[30], bar2[30], bar3[30];
  refrandom(l1,l2,l3);
  cout << l1 << "\t" << l2 << "\t" << l3 << endl;

  pointfill(l1, '@', bar1);
  pointfill(l2, '~', bar2);
  pointfill(l3, ';', bar3);

  cout << bar1 << endl << bar2 << endl << bar3 << endl;
}

void refrandom(int &one, int &two, int &three){ // finds three random numbers for the length of the bar
  srand(time(0));
  one = rand() % 30 + 1;
  two = rand() % 30 + 1;
  three = rand() % 30 + 1;

}

void pointfill(int len, char c, char *ptr){ // Fills the bar with the character in the second parameter, uses pointer incrementation
  char *limit;
  limit = ptr + len;
  while(ptr < limit){
    *ptr = c;
    ptr++;
  }
  *ptr = '\0';


}
