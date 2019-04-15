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
  media(){

  }

  void virtual print(){
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
  }

  string getname(){
    return name;
  }

  float getprice(){
    return price;
  }

  bool operator<(media m){
    return price < m.getprice();
  }
};

class movie : public media {
private:
  string rating;
public:
  movie(string n, float p, string r) : media(n,p), rating(r)
  {

  }


  void print(){
    cout << "Movie:" << endl;
    media::print();
    cout << "Rating: " << rating;
  }

  string getrating(){
    return rating;
  }

};

class book : public media {
private:
  string author;
public:
  book(string n, float p, string a): media(n,p), author(a)
  {

  }

  void print(){
    cout << "Book:" << endl;
    media::print();
    cout << "Author: " << author << endl;
  }

  string getauthor(){
    return author;
  }
};
