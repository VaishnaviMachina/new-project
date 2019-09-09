#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{ 
	char c[20];
	char *p;
	int ip[4];
	printf("enter ip add \n");
	gets(c);
	p=strtok(c,":");
	ip[0]=atoi(p);

	p=strtok(NULL,":");
	ip[1]=atoi(p);

	p=strtok(NULL,":");
	ip[2]=atoi(p);

	p=strtok(NULL,":");
	ip[3]=atoi(p);
	
	
	if((ip[0]>255)&&(ip[1]>255)&&(ip[2]>255)&&(ip[3]>255))
	{
		printf("invalid ip address\n");
		exit(0);
	}
	else 
	{	
	if((ip[0]==0)||(ip[3]==0))
	{
		printf("invalid ip address\n");
		exit(0);
	}
	else if(ip[3]==255)
	{
		printf("invalid ip address\n");
		exit(0);
	}
	else if((ip[0]=127)&&(ip[1]=0)&&(ip[2]=0)&&(ip[3]=1))
	{
		printf("invalid ip address\n");
		exit(0);
	}

	if((ip[0]>1)&&(ip[0]<128))
	printf("Its class A address\n");
	else if((ip[0]>127)&&(ip[0]<192))
	printf("Its class B address\n");
	else if((ip[0]>191)&&(ip[0]<224))
	printf("Its class C address\n");
	else if((ip[0]>223)&&(ip[0]<240))
	printf("Its class D address\n");
	else if((ip[0]>239)&&(ip[0]<256))
	printf("Its class E address\n");
 }}
	
	
