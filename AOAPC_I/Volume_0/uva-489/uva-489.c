
#include <stdio.h>


int main () {
	int round ;
	char ans[100],gus[100];


	while(scanf("%d%s%s",&round,ans,gus)&&round!=-1){
		int chance=7,en[26]={0},i,count=0;
		
		printf("Round %d\n",round);
		for(i=0;ans[i];++i){
			if(!en[ans[i]-'a']){
				count++;
				en[ans[i]-'a']=1;
			}
		}
		for(i=0;gus[i]&&chance>0&&count>0;++i){
			if(en[gus[i]-'a']==0){en[gus[i]-'a']='*';chance--;}
			if(en[gus[i]-'a']==1){en[gus[i]-'a']='X';count--;}
		}
		if(chance==0&&count>0){
			printf("You lose.\n");
			
		}else if (count==0&&chance>0){
			printf("You win.\n");

		}else {
			for(i=0;i<26;++i){
				if(en[i]==1)
				{
					printf("You chickened out.\n");

					break;
				}
			}
		}
				
		
	

	
	}
	return 0;

}




