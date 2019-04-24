/* Roland Rao
Media Class
This file will define the super class media struct
as well as the two subclasses the movie struct and the book struct
*/

#pragma once
#include<iostream>
#include<string.h>
#include<iomanip>
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

  void virtual print(){ // the super print function that can be used and amended by the sub classes
    cout.setf(ios::fixed|ios::showpoint);
    cout << "Name: " << name << endl;
    cout << "Price: " << setprecision(2) << price << endl;
  }

  string getname(){ // returns the name
    return name;
  }

  float getprice(){ // returns the price
    return price;
  }

  bool operator<(media m){ // overloads the < operator so it can be used in the sort method
    return price < m.getprice();
  }
};

class movie : public media { // subclass of media
private:
  string rating;
public:
  movie(string n, float p, string r) : media(n,p), rating(r) // additional variable is rating
  {

  }


  void print(){ // uses the super print function and adds the type of media and the rating
    cout << "Movie:" << endl;
    media::print();
    cout << "Rating: " << rating;
  }

  string getrating(){ // returns rating
    return rating;
  }

};

class book : public media { // book class subclass of media
private:
  string author;
public:
  book(string n, float p, string a): media(n,p), author(a) // additional variable is the author
  {

  }

  void print(){ // uses the super print function and adds the media type as well as the author
    cout << "Book:" << endl;
    media::print();
    cout << "Author: " << author << endl;
  }

  string getauthor(){ // returns author
    return author;
  }
};
