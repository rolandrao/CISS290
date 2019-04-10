#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class media{
private:
  string name;
  float price;
public:
  media(string n, float p) : name(n), price(p)
  {

  }

  void virtual print(){
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
  }
};

class movie : public media {
private:
  float rating;
public:
  movie(string n, float p, float r) : media(n,p), rating(r)
  {

  }

  void print(){
    cout << "Movie:" << endl;
    media::print();
    cout << "Rating: " << rating;
  }

};
