#include <stdio.h>


main ()
{
  int i,j, M[3][4];
  char respuesta;

do
 { 
  
  for (i=0;i<3;i++)
   {
     for (j=0;j<4;j++)
     {
       printf ("Introduce elemento [%d,%d]:", i+1,j+1);
       scanf ("%d", &M[i][j]);
     }
   }

  printf("\n");

  for (i=0;i<3;i++)
   {
     for (j=0;j<4;j++)
      printf ("%d \t", M[i][j]);
     printf("\n");
     
   }

  
 
 printf ("¿Otra vez? (s ó S):");
 scanf ("%s", &respuesta);
 }while (respuesta=='s' || respuesta=='S');	
	
}
