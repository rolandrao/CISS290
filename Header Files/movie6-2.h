/* Roland Rao
Exercise 6-2
This class will define a Movie
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
private:
  string name;
  int year;
public:
  movie62(){
      name = "";
      year = 1980;
  }
  movie(string n, int y): name(n), year(y)
  {

  }

  string getname(){
    return name;
  }

  int getyear(){
    return year;
  }

  void print(){
    cout << "Movie = " << name << endl;
    cout << "Year = " << year << endl;
  }

}
