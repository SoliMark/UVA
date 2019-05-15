#include <stdio.h>
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main (){
	int testcase,i,j,ans;
	int N[5000]={0};
	while(scanf("%d",&testcase)&&testcase!=0){
		for(i=0;i<testcase;++i){
			scanf("%d",&N[i]);
		}
		

	}
	
	return 0;
}