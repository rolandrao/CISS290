/* Roland Rao
 * Exerise 4-8
 * This program will accept two command line arguments and multiply them together
 */
#include<iostream>
#include<cstdlib>
#include<cctype>
using namespace std;

int main(int argc, char *argv[]){
	int x,y,prod;
	if((argc == 3) && isdigit(argv[1][0]) && isdigit(*argv[2])){
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		prod = x*y;
		cout << "Product is " << prod << endl;
		cout << argv[0] << endl;

	}else{
		cout << "Command Line Argument Error\n";
	}


}
