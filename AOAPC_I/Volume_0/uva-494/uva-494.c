#include <stdio.h>


int main () {
	char str [2000];
	int i;
	while (gets(str)){
		int count =0,word=0;
		for(i=0;str[i];++i){
			if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
				word=1;
			}else {
				count+=word;
				word=0;
			}

		}
		count+=word;
		printf("%d\n",count);
	}
	return 0;


}


