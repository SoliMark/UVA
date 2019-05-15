#include <stdio.h>
#include <stdlib.h>

void str_replace(char *,char *,char * );
int boolfind(char *,char * );
void replacestr(char *,char * , int ,int );
int length(char *);

struct find_replace
{
	char find [81];
	char replace [81];
};


int main () {
	int i,j,count;
	while(scanf("%d\n",&count)&&count!=0){
		char target[256];
		struct find_replace str[count];
		for(i=0;i<count;++i){
			
			gets(str[i].find);
			gets(str[i].replace);
			
		}
		scanf("%s",target);
		
		for(i=0;i<count;++i){
			str_replace(target,str[i].find,str[i].replace);
		}
		printf("%s\n",target);
				



		
	}

}
int boolfind(char *target,char * find){
	while(*target){
		if(*target != *find){
			return 0;
		}

		target++;
		find++;
	}
	return 1;
}

void str_replace(char *target,char *find,char * replace){
	int i;
	for(i=0;target[i];++i){
		if(target[i]==find[0]){
			if(boolfind(&target[i],find)){
				//printf("i=%d\n",i);
				replacestr(target,replace,length(find),i);
			}
		}
	}

}

void replacestr(char *target,char * replace,int  find_length,int index){
	int i;
	if(length(replace)<= find_length&&replace[0]!='\n'){
		for(i=index;i<length(replace);++i){
			target[i]=replace[i];
		}
	}else if(replace[0]=='n'){
		for(i=index;i<find_length;++i){
			target[i]=target[i+find_length];
		}
		target[i]='\0';

	}else{
		int offset=length(replace)- find_length;
		for(i=length(target)+offset;i>=length(target);--i){
			target[i]=target[i-offset];
		}
		target[i]='\0';
	}

}
int length(char *str){
	int i;
	for(i=0;str[i];++i){}
	return i;
}
