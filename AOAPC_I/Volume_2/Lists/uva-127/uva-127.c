#include <stdio.h>

void strcopy(char * s1,char * s2){
	int i=0;
	for(i=0;s1[i]=s2[i];++i){}

}

void move(char ** str,int * index,int * length){
	int i;
	for(i= (*index);i<52-(*length)+1;++i){
		strcopy(str[i],str[i+1]);
	}
}
void set_one(int * num){
	int i;
	for(i=0;i<52;++i){
		num[i]=1;
	}
}

int main (){
	char str[52][3];
	int count[52],i=0,pile=0;
	while(scanf("%s",str[i])&&str[i][0]!='#'){
		for(i=1;i<52;++i){
			scanf("%s",str[i]);
		}
		set_one(count);
		int flag=1;
		int length=0;
		while(flag!=52-length){
			flag=1;
			for(i=1;i<52-length;++i){
				if(i<4){
					if(str[i][0]==str[i-1][0]||str[i][1]==str[i-1][1]){
						strcopy(str[i-1],str[i]);
						move(str,&i,&length);
						count[i-1]++;
						count[i]=0;
						length++;
					}else{
						flag++;
					}
				}else{
					if(str[i][0]==str[i-3][0]||str[i][1]==str[i-3][1]){
						strcopy(str[i-3],str[i]);
						move(str,&i,&length);
						count[i-3]++;
						count[i]=0;
						length++;
					}else if(str[i][0]==str[i-1][0]||str[i][1]==str[i-1][1]){
						strcopy(str[i-1],str[i]);
						move(str,&i,&length);
						count[i-1]++;
						count[i]=0;
						length++;
					}else{
						flag++;	
					}
				}
			}

		}
		for(i=0;i<52-length;++i){
			if(count[i])
				pile++;
		}
		printf("%d piles remaining:",pile);
		for(i=0;i<52-length;++i){
			if(count[i])
				printf("%d",count[i]);
		}
		printf("\n");



	}


	return 0;
}