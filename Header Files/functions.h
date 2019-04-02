#pragma once
#include<iostream>
#include<fstream>
#include<time.h>
#include<cstring>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

void quadratic(float *roots,float a, float b, float c){ // requires the address of a size 2 float array to store both roots
  *roots = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
  roots++;
  *roots = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
}

template <class T>
void printToFile(string path,T output){
  ofstream outfile;
  outfile.open(path);
  outfile << output << endl;
  outfile.close();
}
