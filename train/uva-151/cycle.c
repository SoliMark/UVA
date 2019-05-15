#include <stdio.h>

int main () {

	int N,M;

	printf("N M");
	scanf("%d",&N);
	scanf("%d",&M);
	//f(N,M) f(1 m)=0;
	int pos=0;
	for(int i=2;i<=N;++i){
		pos=(pos+M)%i;
	}


	printf("Win= %d",pos);
}