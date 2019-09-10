#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{ 
	struct employe
	{
	 int age;
	 int contact;
	 float salary;
	 char name[25];

	}e;
	printf("enter the name ,age, salary,contact no\n");
	gets(e.name);
	scanf("%d %f %d",&e.age,&e.salary,&e.contact); 
	printf("name=%s age=%d salary=%f contact no=%d\n",e.name,e.age,e.salary,e.contact);
}
