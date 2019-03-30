/* Roland Rao
 * Exercise 4-3
 * This program will use pointers to total an array
 */
#include<iostream>
using namespace std;

int main(){
	int nums[7] = {7,13,11,10,6,9,24}, total = 0, *numptr;
	cout << "Address at beginning of array is " << nums << endl;
	cout << "Address just out of array is " << nums+7 << endl;
	numptr = nums; // point to beginning of array
	while(numptr < nums+7){
		total += *numptr;
		cout << "numptr is pointing at " << *numptr << endl;
		cout << "numptr holds " << numptr << endl;

		numptr++;
	}
	cout << "Total is " << total << endl;
	cout << "numptr holds " << numptr << endl;
}
