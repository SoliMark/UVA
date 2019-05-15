#include <stdio.h>

int str_len(char *str){
	int i;
	for(i=0;str[i];++i){;}

	return i;
}

int main (){
    char str[101];
    int sum[200]={0};
    int i,s_index=0;;

    while(scanf("%s",str)){
    	if(str[0]=='0'&&str[1]=='\0')break;
    	s_index=0;
    	for(i=str_len(str)-1;i>=0;i--){
    		sum[s_index]+=str[i]-'0';
    		s_index++;
    	}
    	for(i=0;i<=200;++i){
    		if(sum[i]>9)
    		{			
				sum[i]=sum[i]%10;
				sum[i+1]++;
    		}
    	}

    }
    int check=0;
    for(i=199;i>=0;--i){
    	if(sum[i]!=0)
    		check=1;
    	if(check)
        	printf("%d",sum[i]);
    }
    printf("\n");


    return 0;
}
