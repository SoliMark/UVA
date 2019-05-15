#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
	
};
void list_visit(struct node *head){
	while(head!=NULL){
		printf("Node data =%d\n",head->data);
		head=head->next;
	}
}


int main () {
	int input,count=0;
	struct node *head;
	struct node *current;
	
	while(scanf("%d",&input)&&input!=-1){
		
		if(count==0){
			head=malloc(sizeof(struct node));
			current=head;
			
		}else{
			current->next=malloc(sizeof(struct node));
			current=current->next;
		}
		current->data=input;
		
		count ++;
	}
	list_visit(head);
	return 0;



}