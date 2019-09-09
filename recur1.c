#include<stdio.h>
void a(int n)
{
	if (n>0)
{
	printf("%d\n",n);
	a(n-1);
}

}
int main()
{
	a(4);

}
