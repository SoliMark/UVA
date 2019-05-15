#include <stdio.h>

void output(int * dish){
	int i;
	for(i=1;i<41;++i){
		switch(dish[i]){
			case 1:
				printf(".");
				break;
			case 2:
				printf("x");
				break;
			case 3:
				printf("W");
				break;
			default:
				printf(" ");
				break;
		}
	}
	printf("\n");
}
void change(int *dish ,int *old_dish){
	int i;
	for(i=1;i<41;++i){
		old_dish[i]=dish[i];
	}
}

int main () {
	int i,j;
	int testcase;
	scanf("%d",&testcase);


	while (testcase--){
		int DNA[10],dish[42]={0},old_dish[42]={0};
		old_dish[20]=1;
		for(i=0;i<10;++i){
			scanf("%d",&DNA[i]);
		}
		output(old_dish);
		for(j=1;j<50;++j){
			for(i=1;i<41;++i){
				dish[i]=DNA[old_dish[i]+old_dish[i-1]+old_dish[i+1]];
			}
			output(dish);
			change(dish,old_dish);

		}
		if(testcase!=0)
			printf("\n");



	}
	return 0;


}
