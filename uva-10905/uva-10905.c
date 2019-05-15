#include <stdio.h>
int cmp(char *s1,char *s2);
void strcopy(char *s1,char *s2);
struct str
{
	char num[90];
};
static char ret[90];
int main (){
	int input,i,j;
	struct str N[50];
	struct str temp;
	while(scanf("%d",&input)!=EOF){
		if(input==0)
			break;
		for(i=0;i<input;++i)
			scanf("%s",N[i].num);
		
		for(i=0;i<input-1;++i){
			for(j=i+1;j<input;++j){
				if(cmp(N[i].num,N[j].num)){
					temp=N[i];
					N[i]=N[j];
					N[j]=temp;
				}
			}
			
		}

		for(i=0;i<input;++i){
			printf("%s",N[i].num);
		}
		printf("\n");
	}
	return 0;
}
char *stradd(char *s1,char*s2){
	
	int i,j;
	for(i=0;s1[i];++i){
		ret[i]=s1[i];
	}
	
	for(j=0;s2[j];++j){
		ret[i+j]=s2[j];
	}
	ret[i+j]='\0';
	return ret;

}
void strcopy(char *s1,char *s2){
	int i;
	for(i=0;s2[i];++i)
		s1[i]=s2[i];
	s1[i]='\0';
}
int cmp(char *s1,char *s2){
	char temp1[90],temp2[90];
	strcopy(temp1,stradd(s1,s2));
	strcopy(temp2,stradd(s2,s1));
	int i=0;
	
	for(i=0;temp1[i];++i){
	
		if(temp1[i]>temp2[i])
			break;
		if(temp1[i]<temp2[i])
			return 1;
	}
	
	return 0 ;

	
}
