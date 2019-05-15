#include <stdio.h>

int main (){
    char str[13];
    int i;
    while(gets(str)){
    	int acc=128;
    	int sum=0;
    	if(str[0]=='_')
    		continue;    			
    	for(i=1;str[i];++i){
       		if(str[i]==' '){
    			acc/=2;
    		}else if(str[i]=='o'){
    			sum+=acc;
    			acc/=2;
    		}
    	}
		printf("%c",sum);
    }
    return 0;
}
