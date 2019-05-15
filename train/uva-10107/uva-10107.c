#include <stdio.h>



int main (){
	long int num[10000];
	long int insert;
	int count =0;
	while (scanf("%ld",&insert)!= EOF){
		int i=count;
		while(i>0 && insert<num[i-1]){
			num[i]=num[i-1];
			i--;
		}
		num[i]=insert;
		
		if(count%2){
			long int output=(long int )(num[count/2]+num[(count+1)/2])/2;
			printf("%ld\n",output);
		}else{			
			
			long int output=(long int )num[(count)/2];
			printf("%ld\n",output);
		}
		count ++;	
	}
	return 0;

}