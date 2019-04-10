/* Roland Rao
Exercise media main
This program will create an array of media pointers
*/
#include<iostream>
#include<string.h>
#include"/Users/rolandrao/Documents/CISS290/Header Files/media.h"

using namespace std;

void sort (media *mm[], int N);  // selection sort array of media pointers of size N

int main()
{
	media *m[3];   // array of three super media pointers
	int j;
	string name, rating, author;
	float price;
	name = "Planet of the Apes";
	price = 8.90;
	rating = "G";
	m[0] = new movie(name, price, rating);
		// address of sub object assigned into pointer element of array
	name = "Back to the Future";
	price = 13.90;
	rating = "PG";
	m[1] = new movie(name, price, rating);
	name = "Intensity";
	price = 7.90;
	author = "Dean Koontz";
	m[2] = new book(name, price, author);

	sort (m, 3);   // selection sort array of media pointers of size N

	for (j = 0; j < 3; j++)
	{
		m[j]->print();	// dynamic binding
		cout << endl;
	}
	return 0;
}


void sort (media *mm[], int N)  // build selection sort funciton
{
  int pass, j, min;
  media temp;
  for (pass = 0; pass <= N - 2; pass++)  // passes
  {
    min = pass;
    for (j = pass + 1; j < N; j++)  // in each pass
    if (mm[min] > mm[j]){
      min = j;
    }
    temp = *mm[min];
    *mm[min] = *mm[pass];
    *mm[pass] = temp;
	  //strcpy(temp, str[min]);
	  //strcpy(str[min], str[pass]);
	  //strcpy(str[pass], temp);
	}

}
