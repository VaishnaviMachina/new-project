#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int q[SIZE];
int f=-1;
int r=-1;
int inq(int q[],int d)
{
	if(f==0&&r==SIZE-1||f==r+1)
	{
	  printf("que is full\n");
	  return 0;	
	}
	else if(r==-1)
	{
	  r++;
	  f++;	
	}
	else if(f>0&& r==SIZE-1)
	{
	 r=0;	
	}
	else
	r++;
	q[r]=d;
}

void delq(int q[])
{
	if(f==-1)
	{
	  printf("que is empty\n");	
	}
	else if(f==r)
	{
	  printf("%d is deleted\n",q[f]);
	  f=-1;
	  r=-1;
	}
	else
	{
	  printf("%d is deleted\n",q[f]);
	  f++;
	}

}
void disp(int q[])
{
	int i;
	if(f>r)
	{
	  for(i=f;i<SIZE-1;i++)
	  printf("%d \n",q[i]);
	  for(i=0;i<=r;i++)
	  printf("%d \n",q[i]);

	}
	else
	{
	  for(i=f;i<=r;i++)
	  printf("%d \n",q[i]);
	
	}


}
int main(){
    int n, ch;
    do
    {
        printf("\n\n Circular Queue:\n1. Insert \n2. Delete\n3. Display\n0. Exit");
        printf("\nEnter Choice 0-3? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number: ");
                scanf("%d", &n);
                inq(q, n);
                break;
            case 2:
                delq(q);
                break;
            case 3:
                disp(q);
                break;
        }
    }while (ch != 0);
}
