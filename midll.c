#include<stdio.h>
#include <stdlib.h> 

struct Node
{
	int data;
	struct Node *next;
};

void printlist(struct Node *no)
{
	while(no!=NULL)
	{
	printf(" %d--> ", no->data); 
        no = no->next; } 
	printf("\n");
}
struct Node* midll(struct Node *no)
{
	struct Node *fp=no;
	struct Node *sp=no;
	if (no!=NULL)
	{
	while(fp!=NULL&&(fp->next!=NULL))
	{
	  fp=fp->next->next;
	  sp=sp->next;
	}
	printf(" %d \n", sp->data);
	}
}
int main()
{
	struct Node *hd=NULL;
	struct Node *scnd=NULL;
	struct Node *trd=NULL;	
	struct Node *four=NULL;
	//struct Node *five=NULL;
	
	int pos;

	hd=(struct Node*)malloc(sizeof(struct Node));
	scnd=(struct Node*)malloc(sizeof(struct Node));
	trd=(struct Node*)malloc(sizeof(struct Node));
	four=(struct Node*)malloc(sizeof(struct Node));
	//five=(struct Node*)malloc(sizeof(struct Node));
	
	
	int p;
	hd->data=1;hd->next=scnd;
	scnd->data=2;scnd->next=trd;
	trd->data=3;trd->next=four;
	four->data=4;four->next=NULL;
	//five->data=5;five->next=NULL;
	//printlist(hd);
	midll(hd);

}
