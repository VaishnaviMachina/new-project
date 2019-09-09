#include<stdio.h>
#include<stdlib.h>
int
main ()
{
  int a[3][3]={{2,3,4},{5,6,7},{8,9,10}};
  int i, j=0, flag=0;
  int count=9;
 	while(count>0)
      {
	printf ("enter the indices \n");
	scanf("%d %d",&i,&j);
	printf ("the element to be inserted\n");
  	scanf("%d",&a[i][j]);
	

	for(i=0;i<3;i++)
	{
	  if(a[j]==a[j+1])
	    if (a[j+1]==a[j+2])
		{
		  printf("player with %d wins\n",a[i][j]);
		  flag=1;
		  exit(0);
		}
	}
	for(j=0;j<3;j++)
	{
	  if(a[i]==a[i+1])
	    if (a[i+1]==a[i+2])
		{
		  printf("player with %d wins\n",a[i][j]);
		  flag=1;
		  exit(0);
		}
	}
	i=0;
	 if((a[i][i]==a[i+1][i+1])&&(a[i+2][i+2]==a[i+1][i+1]))
	   {
		  printf("player with %d wins\n",a[i][i]);
		  flag=1;
		  exit(0);
	    }
	
	if((a[0][2]==a[1][1])&&(a[2][0]==a[1][1]))
	   {
		  printf("player with %d wins\n",a[0][2]);
		  flag=1;
		  exit(0);
	    }
	count--;
	}
	if(flag==0)
	printf("Draw match\n");
}

