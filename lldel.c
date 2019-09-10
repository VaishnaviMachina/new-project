#include<stdio.h>
#include <stdlib.h> 

struct Node
{
	int data;
	struct Node *next;
};
struct Node* getnode(int data)
{
	struct Node *nn=NULL;
	nn=(struct Node*)malloc(sizeof(struct Node));	
	nn->data=data;
	nn->next=NULL;
	return nn;
}

void printlist(struct Node *no)
{
	while(no!=NULL)
	{
	printf(" %d ", no->data); 
        no = no->next; 
	} 
	printf("\n");
}
struct Node* delbeg(struct Node *hd)
{	
	struct Node *tmp=NULL;
	tmp=(struct Node*)malloc(sizeof(struct Node));
	if (hd==NULL)
	return NULL;

	tmp=hd;
	hd=tmp->next;
	free(tmp);
	return hd;

}
struct Node* delend(struct Node *hd)
{
	struct Node *tmp=NULL;
	tmp=(struct Node*)malloc(sizeof(struct Node));	
	if (hd==NULL)
	return NULL;
	if (hd->next==NULL)
	{
	  free(hd);
	  return NULL;
	}
	tmp=hd;
	while((tmp->next->next)!=NULL)
	tmp=tmp->next;
	free(tmp->next);
	tmp->next=NULL;

}
void delnpos(struct Node *hd,int pos)
{
	struct Node *tmp=NULL;
	tmp=(struct Node*)malloc(sizeof(struct Node));		
	
	tmp=hd;
	int i;
	for(i=0;i<pos-1;i++)
	{
	  tmp=tmp->next;
	}
	if(tmp==NULL||(tmp->next==NULL))
	return;
	
	struct Node *after=tmp->next->next;
	free(tmp->next);
	tmp->next=after;

}
	
int main()
{
	struct Node *hd=NULL;
	struct Node *scnd=NULL;
	struct Node *trd=NULL;	
	struct Node *four=NULL;
	struct Node *five=NULL;
	
	int pos;

	hd=(struct Node*)malloc(sizeof(struct Node));
	scnd=(struct Node*)malloc(sizeof(struct Node));
	trd=(struct Node*)malloc(sizeof(struct Node));
	four=(struct Node*)malloc(sizeof(struct Node));
	five=(struct Node*)malloc(sizeof(struct Node));
	
	
	int p;
	hd->data=1;hd->next=scnd;
	scnd->data=2;scnd->next=trd;
	trd->data=3;trd->next=four;
	four->data=4;four->next=five;
	five->data=5;five->next=NULL;
	printlist(hd);

	printf("enter position to delete node 1>begining 2>end 3>Nth position\n");
	scanf("%d",&pos);

	if(pos==1)
	{
	  hd=delbeg(hd);
	  printlist(hd);
	}
	else if(pos==2)
	{
	  delend(hd);
	  printlist(hd);
	}
	else if(pos==3)
	  {
	   printf("enter position\n");
	   scanf("%d",&p);
	   if (p<0)
	    printf("invalid position\n");
	   else if(p==0)
	    hd=delbeg(hd);
	   else
	    delnpos(hd,p);
	   printlist(hd);
	  }
}




