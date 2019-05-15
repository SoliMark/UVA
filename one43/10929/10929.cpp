#include <iostream>
#include <cstring>
using namespace std ;

int main ( ){
	string num ;
	
	while(cin>>num){
		int sum=0;
		if(num=="0"){
			break;
		}
		cout<<num;

		int ne=1;
		for(int i=0;i<num.length();++i){
			sum+=(num[i]-48)*ne;
			ne*=-1;
		}
		if(sum%11==0){
			cout<<" is a multiple of 11."<<endl;
		}else{
			cout<<" is not a multiple of 11."<<endl;
		}


	}

}