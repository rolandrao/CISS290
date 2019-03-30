/* Roland Rao
 * Exercise 4-2b
 * This program will calculate quality points by pointer and reference
 */
#include<iostream>
using namespace std;

void qualitypoints(int, int&);

int main(){
	int grade, pts = 0;
	cout << "Enter a grade: ";
	cin >> grade;
	qualitypoints(grade,pts);
	cout << "Quality points are " << pts << endl;
}


void qualitypoints(int g, int &ptsptr){
	if(g >= 90){
		ptsptr = 4;
	}else if(g >= 80){
		ptsptr = 3;
	}else if(g >= 70){
		ptsptr = 2;
	}else if(g >=60){
		ptsptr = 1;
	}else{
		ptsptr = 0;
	}
}

