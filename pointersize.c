#include<stdio.h>
int main()
{ int a;
 char b;
	int *c=&a;
	int *d=&b;
	printf("%u %u\n",sizeof(c),size(d));
}
