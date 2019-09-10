#include<stdio.h>
#include <stdlib.h> 

struct Node
{
	int data;
	struct Node *next;
};

void printlist(struct Node *no)
{
	if(no==NULL)
	return;
	else
	{
	printf(" %d ", no->data);
	printlist(no->next);
	}


	/*while(no!=NULL)
	{
	printf(" %d ", no->data); 
        no = no->next; } 
	printf("\n");*/
}	

struct Node* inbeg(struct Node *no)
{
  struct Node *tmp=NULL;
  tmp=(struct Node*)malloc(sizeof(struct Node));
  printf("enter data\n");
  scanf("%d",&(tmp->data));
  tmp->next=no;
  no=tmp;
  
  printlist(no);
  return no;
}

void inend(struct Node *no)
{
	struct Node *tmp=NULL;
	struct Node *tmp1=NULL;
	tmp=(struct Node*)malloc(sizeof(struct Node));
	tmp1=(struct Node*)malloc(sizeof(struct Node));
	printf("enter data\n");
	scanf("%d",&(tmp->data));
	tmp1=no;
	while(tmp1->next!=NULL)
	{
	  tmp1=tmp1->next;	
	}
	tmp1->next=tmp;
	tmp->next=NULL;
	printlist(no);
}

void npos(struct Node *no)
{	
	int p,i;
	struct Node *tmp=NULL;
	tmp=(struct Node*)malloc(sizeof(struct Node));
	struct Node *tmp1=NULL;
	tmp1=(struct Node*)malloc(sizeof(struct Node));
	printf("enter data\n");
	scanf("%d",&(tmp->data));
	printf("enter the position\n");
	scanf("%d",&p);
	tmp1=no;
	for(i=0;i<(p-1);i++)
	{
	tmp1=tmp1->next;
	}
	if(tmp1==NULL)
	{
	printf("invalid\n");
        return;
	}
	tmp->next=tmp1->next;
	tmp1->next=tmp;
	printlist(no);
}



int main()
{
	struct Node *hd=NULL;
	struct Node *scnd=NULL;
	struct Node *trd=NULL;	
	struct Node *tmp=NULL;
	
	int pos;

	hd=(struct Node*)malloc(sizeof(struct Node));
	scnd=(struct Node*)malloc(sizeof(struct Node));
	trd=(struct Node*)malloc(sizeof(struct Node));
	tmp=(struct Node*)malloc(sizeof(struct Node));
	
	

	hd->data=12;hd->next=scnd;
	scnd->data=2;scnd->next=trd;
	trd->data=1;trd->next=NULL;
	
	printlist(hd);
 
	printf("enter position of new node 1>begining 2>end 3>Nth position\n");
	scanf("%d",&pos);
	
	if(pos==1)
	  hd=inbeg(hd);
	else if(pos==2)
	  inend(hd);
	else
	  npos(hd);

	

	
	
	

}
