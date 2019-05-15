#include <stdio.h>

int main () {

	int N,m,i;
	while (scanf("%d",&N)&&N){
		for( m=1;;++m){
			int index=0;
			for(i=2;i<N;++i)
				index=(index+m)%i;
			if(index==11)break;
		}
		printf("%d\n",m);
	}
	return 0;

}