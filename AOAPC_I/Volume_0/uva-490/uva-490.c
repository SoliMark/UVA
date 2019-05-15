#include <stdio.h>

int length (char * str){
	int i;
	for(i=0;str[i];++i){}

	return i;

}

int main () {
	char str[101][101];
	int count=0,max_length=0;
	int i=0,j;
	while(gets(str[count])){	
		for(i=0;str[count][i];++i){}
		max_length=max_length>i?max_length:i;
		count++;
		
	}
	for(j=0;j<max_length;++j){
		for(i=count-1;i>=0;--i){
			if (j>length(str[i])-1)
				printf(" ");
			else
				printf("%c",str[i][j]);

		}
		printf("\n");
	}
	return 0;





}