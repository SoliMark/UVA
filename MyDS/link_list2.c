#include <stdio.h>
#include <stdlib.h>
	

struct node
{
	int data;
	struct node * next;
};

typedef struct node Node;


Node * add(int);
void list(Node *);
int main (void ){
	Node * first ;
	Node * node;
	int count =0;
	while(1){
		int select,value=0;
		printf("\n (1) add");
		printf("\n (2) list");
		printf("\n $: ");
		scanf("%d",&select);
		if (select==-1)
			break;
		switch (select){
			case 1:
				
				printf("\n input value: ");
				scanf("%d",&value);
				if(count ==0){
					node = add(value);
					first=node;					
				}else{
					node->next=add(value);
					node=node->next;
				}
				
				count++;
				break;

			case 2:
				list(first);
				break;

			default:
				printf("\n error");
				break;
		}
	}
	return 0;
}


Node *add (int value){
	Node * node = (Node *) malloc (sizeof(Node));
	if(node==NULL){
		printf("ERROR \n");
	}
	node->data=value;
	node->next=NULL;
	return node;
}
	
void list(Node *node){
	while(node!=NULL){
		printf("\n %d",node->data);
		node=node->next;
	}
}