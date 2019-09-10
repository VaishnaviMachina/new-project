#include<stdio.h>
#include <stdlib.h> 

struct Node
{
	int data;
	struct Node *next;
};

void display(struct Node *top)
{
	
	while(top!=NULL)
	{
	printf(" %d ", top->data); 
        top = top->next; 
	} 
	printf("\n");
}
struct Node* push(struct Node *top)
{
  struct Node *tmp=NULL;
  tmp=(struct Node*)malloc(sizeof(struct Node));
  printf("enter data\n");
  scanf("%d",&(tmp->data));
  tmp->next=top;
  top=tmp;
  
  display(top);
  return top;
}
struct Node* pop(struct Node *top)
{	
	struct Node *tmp=NULL;
	tmp=(struct Node*)malloc(sizeof(struct Node));
	if (top==NULL)
	return NULL;

	tmp=hd;
	hd=tmp->next;
	free(tmp);
	return hd;
	display(top);
}
void peek(struct Node *top)
{
	if (top==NULL)
	return NULL;
	
	printf(" %d \n", top->data);


}
int main()
{
	struct Node *top=NULL;
	top=(struct Node*)malloc(sizeof(struct Node));
	top->data=1;
	top->next=NULL;
	
	while(1)
      {
	printf("enter operation 1>push 2>pop 3>display 4>peek 5>exit\n");
	scanf("%d",&pos);
	switch(pos)
	{
	 case 1:top=push(top);
		break;
	 case 2:pop(top);
		break;
	 case 3:display(top);
		break;
	 case 4:peek(top);
		break;
	 case 5:exit(0);
		break;




}	
