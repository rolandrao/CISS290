/* Roland Rao
 * Exercise 3-17
 * This program will convert a fracitno to a decimal with a try block
 */
#include<iostream>
#include<iomanip>
#include<cstring>
#include<cctype>
#include<cstdlib>
using namespace std;

int main(){
	int num,den,i;
	float ans;
	char snum[11] = "\0", sden[11] = "\0";
	cout.setf(ios::fixed | ios::showpoint);
	cout << "Enter fraction (ex. 2/3): ";
	cin.getline(snum, sizeof(snum), '/');
	cin.getline(sden, sizeof(sden), '\n');
	try
	{
		for(i = 0; i < strlen(snum); i++){
			if(!isdigit(snum[i])){
				throw snum[i];
			}
		}
		num = atoi(snum);
		if(strlen(sden) == 0){
			throw sden;
		}
		for(i = 0; i < strlen(sden); i++){
			if(!isdigit(sden[i])){
				throw sden[i];		
			}
		}
		den = atoi(sden);

		if(den == 0){
			throw den;
		}
		ans = (float)num/den;
		cout << "Decimal value is: " << setprecision(3) << ans << endl;
	}
	catch(int i){
		cout << i << "is not a valid denominator\n";
	}catch(char ex1){
		cout << ex1 << " is not a digit\n";
	}catch (char ex3[11]){
		cout << ex3 << " is an empty denominator\n";
	}
}
