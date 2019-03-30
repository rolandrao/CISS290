/* Roland Rao
 * Exercise 4-11
 * This program will calculate the average grades using an input and output file*/
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main(){
	int grade,howmany,sum = 0,avg;
	ifstream infile;
	ofstream outfile;
	infile.open("gradesin.txt");
	outfile.open("gradesout.txt");
	if(!infile){
		cout << "Input file can't be opened\n";
	}else if(!outfile){
		cout << "Output file can't be created\n";
	}else{
		while(!infile.eof()){
			infile >> grade;
			howmany++;
			sum += grade;
		}
		avg = (float)sum/howmany;
		cout.setf(ios::showpoint | ios::fixed);
		outfile.setf(ios::showpoint | ios::fixed);
		cout << "Average is " << setprecision(1) << avg << endl;
		outfile << "Average is " << setprecision(1) << avg << endl;
		infile.close();
		outfile.close();
	}
}
