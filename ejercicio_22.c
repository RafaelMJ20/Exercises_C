#include <stdio.h>


main ()
{
  int i,j, k;
  
for (k=1;k<5;k++)
{
  for (i=1;i<20;i++)
    {
      printf ("\n");
      for(j=i;j<20;j++)
        printf("*");
    }

  for (i=20;i>0;i--)
    {
      printf ("\n");
      for(j=i;j<20;j++)
        printf("*");
    }
}
printf("\n");
}
