#include <stdio.h>

int main () {
	
	char str[128];
	int i;

	while (scanf("%s",str)!=EOF){
		for(i=0;str[i];++i){
			str[i]=str[i]-7;
		}
		printf("%s\n",str);
	}

	return 0;

}