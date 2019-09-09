#include <stdio.h>

#include <string.h>

#include<stdlib.h>
int main()
{
	char *str;
	printf("the enter string\n");
	gets(str);
	char s1[20][5];
	int i=0,j=0,p,q;
	
	int b=0,e,w=0;
	while(*(str)!='\0')
	{
	 if(*(str)==" ")
	 {
	   w++;
	   for(i=b;i<=e;i++)
	  {
	     s1[i][j]=*(str+i);
	   }
	   s1[e+1][j]='\0';
	  j++;
	  b=e+2;
	 }
	 else
	{e++;}
	str++;
	}
	
	printf("the reverse string\n");
  	for(p=w;p>=0;p--)
	{
	  for(q=0;s1[q][p]!='\0';p++)
	  {
	    printf("%s",s1[q][p]);
	   }
	  printf(" ");

	}
	
	

}

	
	
	
	

