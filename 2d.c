#include<stdio.h>
int
add (int a[][3], int b[][3])
{
  int  i, j;
  printf ("elements of array a+b\n");
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{

	  printf ("%d ", a[i][j] + b[i][j]);

	}
	printf ("\n");
    }


  
  return 0;
}
int
main ()
{
  int a[3][3], b[3][3];
  int i, j;
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf ("enter a[%d][%d]\n", i, j);
	  scanf ("%d", &a[i][j]);

	  printf ("enter b[%d][%d]\n", i, j);
	  scanf ("%d", &b[i][j]);

	}
    }

  printf ("elements of array a\n");
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{

	  printf ("%d ", a[i][j]);
	}
      printf ("\n");
    }

  printf ("elements of array b\n");
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{

	  printf ("%d ", b[i][j]);
	}
      printf ("\n");
    }

  
  add (a, b);
  return 0;
}


