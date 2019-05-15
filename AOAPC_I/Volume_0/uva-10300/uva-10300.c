#include <stdio.h>


int main (){
	int testcast;
	int input,farmyard,animal,farmer;
	scanf("%d",&testcast);
	while(testcast--){
		scanf("%d",&input);
		long long int  sum=0;
		while(input--){
			
			scanf("%d%d%d",&farmyard,&animal,&farmer);
			sum+=farmyard*farmer;
		}
		printf("%lld\n",sum);

	}


}