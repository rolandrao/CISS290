#include<iostream>
#include<cctype>
using namespace std;

int main(){
	char ch;
	int dtot = 0, utot = 0, ltot = 0, stot = 0,ptot = 0,sptot = 0;


	cout << "Input characters (<ctrl>z to end): ";
	while ((ch = cin.get()) != '`'){
		if (isdigit(ch)){
			dtot++;

		}else if(isupper(ch)) {
			utot++;
		}else if(islower(ch)){
			ltot++;
		}else if(ispunct(ch)){
			ptot++;
		}else if(isspace(ch)){
			sptot++;
		}else{
			stot++;
		}
	}


	cout<<"\nThere were: "<<dtot<<" digits"<<endl;
	cout<<"There were: "<<utot<<" upper case characters"<<endl;
	cout<<"There were: "<<ltot<<" lower case characters"<<endl;
	cout<<"There were: "<<ptot<<" punctuation characters"<<endl;
	cout<<"There were: "<<sptot<<" space characters"<<endl;
	cout<<"There were: "<<stot<<" symbols"<<endl;
	return 0;





}
