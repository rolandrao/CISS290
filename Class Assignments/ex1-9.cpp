#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int x;
	cout.setf(ios::showbase);
	cout << "ASCII Values" << endl;
	cout << "Character" << setw(12) << "Decimal" << setw(10) << "Octal" << setw(16) << "Hexadecimal" << endl;

	for (int x = 48; x <= 122; x++){
		cout << setw(5) << (char)x << setw(14) << dec << x << setw(12) << oct << x << setw(13) << hex << x << endl;
	}







}
