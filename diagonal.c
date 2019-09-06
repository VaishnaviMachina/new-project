#include<stdio.h>
int
main ()
{
  int a[10][10];
  int i, j;
  int m, n;
  printf ("enter order of sqr mat a\n");
  scanf ("%d", &m);
  for (i = 0; i < m; i++)
    {
      for (j = 0; j < m; j++)
	{
	  printf ("enter a[%d][%d]\n", i, j);
	  scanf ("%d", &a[i][j]);
	}
    }

  printf ("diagonal elements of array a\n");
  for (i = 0; i < m; i++)
    {
      for (j = 0; j < m; j++)
	{
	  if(i==j)
	  printf ("%d ", a[i][j]);
	  
	}
      
    }
printf ("\ndiagonal elements of array a\n");
for (i = 0; i < m; i++)
    {
      printf("%d ",a[m+i-1][i]);
      
    }

}
