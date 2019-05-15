#include <stdio.h>


int main() {
	int testcase;
	scanf("%d",&testcase);
	int c=0;
	while (testcase--){
		int high,count,i,j;
		scanf("%d",&high);
		scanf("%d",&count);
		while(count--){
			if(c)
				printf("\n");
			for(i=0;i<(high-1)*2+1;++i){
				int k=(i>high-1?2*(high-1)-i:i);
				for(j=0;j<=k;j++){
					printf("%d",k+1);
				}	
				printf("\n");
			}
			c++;
		}
	}
	return 0;


}