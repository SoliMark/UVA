#include <iostream>

using namespace std ;


int main () { 
	int n1,n2;

	while(cin>>n1){
		cin>>n2;
		if(n1==0&&n2==0)
			break;

		int carry=0,c=0;
		while(n1||n2){
			if(n1%10+n2%10+c>9){
				carry++;
				c=1;
			}else{
				c=0;
			}
			n1=n1/10;
			n2=n2/10;
		}
		if(!carry){
			cout<<"No carry operation."<<endl;
		}else if (carry ==1){
			cout<<carry<<" carry operation."<<endl;
		}else{
			cout<<carry<<" carry operations."<<endl;
		}
	}


}