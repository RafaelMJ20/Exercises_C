#include <stdio.h>



main ()
{
  int i,j, k,l;
  
for (k=1;k<5;k++)
{
  for (i=1;i<20;i++)
    {
      printf ("\n");
      for(j=i;j<20;j++)
       {
        for (l=1;l<10000;l++)
    
        printf("*");
        
       }
    }

  for (i=20;i>0;i--)
    {
      printf ("\n");
      for(j=i;j<20;j++)
       {
        printf("*");
        
       }
    }
}
printf("\n");
}
