#include <stdio.h>


int main ( ){
	int testcase,i;
	char str[26];
	while(scanf("%d ",&testcase)){
		int N=testcase,max=0;
		int sum =0;
		if(testcase==0)
			break;
		testcase;
		while (testcase--){
			int count=0;
			gets(str);
			for(i=0;str[i];++i){
				if(str[i]=='X')
					count++;
			}
			
			sum+=count;
			max=max<count?count:max;
		}
		
		sum=N*max-sum;
		
		printf("%d\n",sum);
	}
	return 0;
	

}