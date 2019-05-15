#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
	
};

typedef struct node Node;

int isEmepty( Node *);
int StackTop(Node *);
Node * creates(void);
Node * push (Node*,int);
Node * delete(Node*);
void  list(Node*);

int main (void ) {

	Node* sTop; 
    int input, select; 

    sTop = creates(); 

    while(1) { 
        printf("\n\n close -1："); 
        printf("\n (1)push"); 
        printf("\n (2)show top"); 
        printf("\n (3)delete top"); 
        printf("\n (4)list	"); 
        printf("\n $ c>"); 
        scanf("%d", &select); 
        
        if(select == -1) 
            break; 

        switch(select) { 
            case 1: 
                printf("\n value："); 
                scanf("%d", &input); 
                sTop = push(sTop, input); 
                
                break; 
            case 2: 
                if(!isEmepty(sTop)) 
                	printf("\n top value : %d ", StackTop(sTop)); 
                else
                	printf("stack is Emepty \n"); 

                break; 
            case 3:
            	if(!isEmepty(sTop)) 
                	sTop = delete(sTop);
                else
                	printf("stack is Emepty \n"); 
                break; 
            case 4: 
                list(sTop); 
                break; 
            default: 
                printf("\n error!"); 
        } 
    } 

    printf("\n"); 

	return 0;
}

int isEmepty(Node * top){return (top==NULL);}

int StackTop(Node *top){return	(top->data);}

void list(Node * top) {
	while(!isEmepty(top)){
		printf(" %d \n",top->data);
		top=top->next;
	}
}

Node * creates(void){return NULL;}

Node * delete(Node * top){
	return top->next;
}

Node * push (Node *top,int value){
	Node * New_Node= (Node *)malloc(sizeof(Node));
	if(New_Node==NULL){
		printf("ERROR \n");
	}
	New_Node->data=value;
	New_Node->next=top;
	top=New_Node;

	return top;
}


