/*#include <stdio.h>
#include <stdlib.h>*/
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iostream>


using namespace std ;
int dt(int *a,int *b){

	return *a>*b?*a-*b:*b-*a;
} 
int main () {
	int testcase,num[500];
	cin>> testcase;
	while (testcase--){
		int r,ans=0;
		cin>> r;
		for(int i=0;i<r;++i){
			cin>>num[i];
		}
		sort(num,num+r);
		for(int i=0;i<r;++i){
			ans+=dt(&num[r/2],&num[i]);
		}
		cout<<ans<<endl;
	}




}