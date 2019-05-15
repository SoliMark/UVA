#include <stdio.h>


int main () {
	char input [200];
	while(gets(input)){
		int i,sum=0;
		for(i=0;input[i];++i){
			if(input[i]>='0'&&input[i]<='9'){
				sum+=input[i]-'0';
			}else if(input[i]=='b'){
				int j;
				for(j=0;j<sum;++j){
					putchar(' ');
				}
				sum=0;
			}else if(input[i]=='!'){
				puts("");
			}else{
				int j;
				for(j=0;j<sum;++j){
					putchar(input[i]);
				}
				sum=0;
			}

		}
		puts("");


	}
	return 0;



}
