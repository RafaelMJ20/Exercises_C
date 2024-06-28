#include <stdio.h>


main ()
{
  int i,j,h, DIM;
  char respuesta;

do
 { 
  
  do
    {
     printf ("Dimensión de la matriz:");
     scanf ("%d", &DIM);
     }while (DIM%2==0);

  int M[DIM][DIM];

  for (i=0;i<DIM;i++)
    M[i][0]=1;

  for (i=0;i<DIM;i++)
    M[i][i]=1; 

  for (i=2;i<DIM;i++)
    {
      for (j=1;j<i;j++)
         M[i][j]=M[i-1][j]+M[i-1][j-1];
    }
  for (i=0;i<DIM;i++)
    {
      for(j=0;j<i;j++)
       {
         h=M[i][j];
         printf ("%d \t", h);
       }
       printf("\n"); 
    }
     
   
 
 printf ("¿Otra vez? (s ó S):");
 scanf ("%s", &respuesta);
 }while (respuesta=='s' || respuesta=='S');	
	
}
