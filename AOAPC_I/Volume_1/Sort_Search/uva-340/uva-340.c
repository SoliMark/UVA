#include <stdio.h>

int check_array_zero(int * array,int array_length){
	int i;
	for(i=0;i<array_length;++i){
		if(array[i]!=0)
			return 0;
	}
	return 1;
}



int main (){
	int N[1000];
	int Guess[1000];
	int N_length,i,j,Game=1;
	while(scanf("%d",&N_length)&&N_length!=0){
		printf("Game %d:\n",Game++);
		
		for(i=0;i<N_length;++i){scanf("%d",&N[i]);}
		
		while(1){
			int A=0,B=0;
			int temp[1000];
			for(i=0;i<N_length;++i){
				scanf("%d",&Guess[i]);
				temp[i]=N[i];
			}
			if(check_array_zero(Guess,N_length))
				break;
			for(i=0;i<N_length;++i){
				if(temp[i]==0)continue;
				for(j=0;j<N_length;++j){
					if(Guess[j]==0)continue;
					if(temp[i]==Guess[j]&&i==j){
						A++;
						temp[i]=0;
						Guess[i]=0;
					}
				}
			}			
			for(i=0;i<N_length;++i){
				if(temp[i]==0)continue;
				for(j=0;j<N_length;++j){
					if(Guess[j]==0)continue;
					if(temp[i]==Guess[j]&&i!=j){
						B++;
						temp[i]=0;
						Guess[j]=0;
					}
					
				}
			}			
			printf("    (%d,%d)\n",A,B);
		}		
	}
	return 0;

}


