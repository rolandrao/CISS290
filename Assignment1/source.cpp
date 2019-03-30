/* Roland Rao
 * Assignment 1 Cfunsol
 * Written by Code Brown
 * This program provides the user with a variety of different calculation and conversion options includiung cosine, logarithm and converting hex to decimal and decimal to hex
 * Submitted on 2/6/19
 */



#include<iostream>
#include<iomanip>
#include<cmath>
#include<stdlib.h>


using namespace std;


void cosineFunction(){
	double radians,answer;
	string choice;
	cout.setf(ios::fixed | ios::showpoint); // sets the output stream to a fixed number of decimal places
	cout << "\n Enter the desired amount of radians: ";
	cin >> radians;
	cout << "\n-----------------------------------------" << endl;;
	cout << "|\tChoose one of the following:\t|\n";
	cout << "|\tRegular Cosine\t\t\t|\n";
	cout << "|\tArc Cosine\t\t\t|\n";
	cout << "|\tHyperbolic Cosine\t\t|\n";
	cout << "-------------------------------------------\n";
	cin >> choice;
	if(choice == "Regular"){
		answer = cos(radians);
	}else if(choice == "Arc"){
		answer = acos(radians);
	}else if(choice == "Hyperbolic"){
		answer = cosh(radians);
	}

	cout<<"Your answer is: " << showpos << setprecision(3) << answer << endl; // shows a positive or negative sign preceeding the answer

}

void logarithmFunction(){
	double in,answer;
	string choice;

	cout << "Enter the number: ";
	cin >> in;

	cout.setf(ios::fixed|ios::showpoint); // configures the output stream to show the decimal even with a whole number
	cout << "\n-----------------------------------------\n";
	cout << "|\tChoose one of the following:\t|\n";
	cout << "|\tCommon Logarithm\t\t|\n";
	cout << "|\tNatural Logarithm\t\t|\n";
	cout << "-----------------------------------------\n";
	cin >> choice;
	
	if(choice == "Common"){
		answer = log10(in);
	}else if(choice == "Natural"){
		answer = log(in);
	}

	cout << "Your answer is: " << noshowpos << setprecision(3) << answer << endl;


}

void conversionFunction(){
	int in;
	string choice;

	cout << "----------------------------------------\n";
	cout << "|\tChoose one of the following:\t|\n";
	cout << "|\tDecimal to Hex\t\t\t|\n";
	cout << "|\tHex to Decimal\t\t\t|\n";
	cout << "----------------------------------------\n";
	cin >> choice;
	if(choice == "Decimal"){
		bool lower;
		cout << "Lower case for your output? (true or false)?: ";
		cin >> boolalpha >> lower; // This line changes the input stream to accept boolean inputs
		cout << "Enter the Decimal Value: ";
		cin >> in;
		if(lower == false){
			cout << "Your answer in Hex is: 0x" << noshowpos << hex << uppercase << in << endl; // This line converts the decimal value to hex and makes it upper case before displaying it
		}else{
			cout << "Your answer in Hex is: 0x" << noshowpos << hex << nouppercase << in << endl;
		}
	}else if(choice == "Hex"){
		cout << "Enter the Hexidecimal value: ";
		cin >> hex >> in;
		cout << "Your answer in Decimal is: " << noshowpos << dec << in << endl;
	}	
}

int main(){

	string choice;

	while(1){
		cout<<"-----------------------------------------\n";
		cout<<"|\tChoose one of the following:\t|\n";
		cout<<"|\tCosine\t\t\t\t|\n";
		cout<<"|\tLogarithm\t\t\t|\n";
		cout<<"|\tConversion\t\t\t|\n";
		cout<<"|\tExit\t\t\t\t|\n";
		cout<<"-----------------------------------------\n\t";
		cin >> choice;

		if(choice == "Cosine"){
			cout<<"Cosine chosen";
			cosineFunction();
		}else if(choice == "Logarithm"){
			logarithmFunction();
		}else if(choice == "Conversion"){
			conversionFunction();
		}else if(choice == "Exit"){
			cout<<"Exit chosen" << endl;
			exit(0);
		}
	}	

}


