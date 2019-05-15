#include <stdio.h>

int strlength(char *str){
	int i;
	for(i=0;str[i];++i){;}

	return i;
}

int main (){
	char str1[305],str2[305];
	int num1[305],num2[305];
	int i,j,k;
	while(scanf("%s",str1)!=EOF){
		int ans[605]={0};
		scanf("%s",str2);
		for(i=0;str1[i]||str2[i];++i){
			num1[i]=str1[i]-'0';
			num2[i]=str2[i]-'0';
		}
		int anslength=strlength(str1)+strlength(str2);
		int index=0;
		for(i=strlength(str1)-1;i>=0;i--){
			int len=0;
			for(j=strlength(str2)-1;j>=0;j--){
				ans[len+index]+=num1[i]*num2[j];
				len++;
			}

			index++;
			for(k=0;k<anslength;++k){
				if(ans[k]>9){
					
					ans[k+1]=ans[k+1]+ans[k]/10;
					ans[k]=ans[k]%10;
					
				}
			}
		}
		int check=0;
		for(i=anslength;i>=0;i--){
			if(ans[i]!=0)
				check=1;
			if(check)
				printf("%d",ans[i]);
		}
		if(i<0&&check==0){
			printf("0");
		}
		printf("\n");
		
	}


    return 0;
}
