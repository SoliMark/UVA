#include <stdio.h>


int main () {
	long long num;
	int limit,c=1;
	while(scanf("%lld %d",&num,&limit)&&num>0&&limit>0){
		int term=0;
		int A=num;
		while(num<=limit){
			if(num==1){
				term++;
				break;
			}
			if(num%2==0){
				num/=2;
				
			}else{
				num=3*num+1;
				
			}
			term++;
			

		}
		printf("Case %d: A = %d, limit = %d, number of terms = %d\n",c,A,limit,term);
		c++;

	}
	return 0;

}