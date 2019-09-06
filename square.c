#include<stdio.h>
int main()
{
int a[10];
int i;
for(i=0;i<10;i++)
{
printf("enter a no");
scanf("%d",&a[i]);
printf("%d\n",a[i]*a[i]);
}
return 0;
}
