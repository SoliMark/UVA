#include <iostream>

using namespace std ;

long int  dt (long int *a,long int *b){
	return *a>*b?*a-*b:*b-*a;
}
int main () {
	long int n1,n2;
	while(cin>>n1){
		cin>>n2;
		cout<<dt(&n2,&n1)<<endl;
	}


}


