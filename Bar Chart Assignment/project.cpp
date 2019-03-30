#include<iostream>
//#include<time.h>
using namespace std;

void refrandom(int*, int*, int*);

void pointfill(int, char, char*);

int main(){
	int l1,l2,l3;
	char bar1[30], bar2[30], bar3[30];
	refrandom(&l1,&l2,&l3);
	cout << l1 << endl << l2 << endl << l3 << endl;
	cout << "\n\n";
	pointfill(l1,'@',bar1);
	pointfill(l2,'~',bar2);
	pointfill(l3,';',bar3);
	cout << bar1 << endl;
	cout << bar2 << endl;
	cout << bar3 << endl;

}


void refrandom(int &ptr1, int &ptr2, int &ptr3){	
	//srand(time(0));
	ptr1 = rand() % 30 + 1; 
	ptr2 = rand() % 30 + 1;
	ptr3 = rand() % 30 + 1;
}

void pointfill(int len, char c, char *locptr){
	char *ptr;
	ptr = locptr;
	int i = 0;
	while(i < len){
		*ptr = c;
		ptr++;
	}
	*ptr = '\0';
}


