/* Roland Rao
  Exercise 4-20
  This program will increment a pointer through an array
  */
#include<iostream>
using namespace std;

int main(){
  int grades[5] = {87,85,91,95,93};
  int *gptr;
  gptr= new int[50];
  int *limitptr;
  gptr = grades;
  if(gptr == limitptr){
    cout << "True";
  }else{
    cout << "False";
  }
  limitptr = grades + 5;
  while(gptr < limitptr){
    cout << *gptr << " ";
    gptr = gptr +1;
  }

}
