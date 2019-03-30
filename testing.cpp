#include"functions.h"
using namespace std;

int main(){
  float roots[2];
  string path = "gradesout.txt";
  int a = 3;
  string g = "test string";
  quadratic(roots,1,3,-4);
  cout << roots[0] << endl << roots[1] << endl;
  printToFile(path, roots[1]);
  printToFile(path, a);
  printToFile(path, g);

}
