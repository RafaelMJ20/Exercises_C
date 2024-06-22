#include <stdio.h>


main ()
{
  int i,j, filas, cols, pos_i_mayor, pos_i_menor, pos_j_mayor, pos_j_menor, mayor,menor;
  char respuesta;

do
 { 
  
  do
   {
     printf("Introduce número de filas:");
     scanf ("%d", &filas);
   } while (filas <=1);
 
  do
   {
     printf("Introduce número de columnas:");
     scanf ("%d", &cols);
   } while (cols <=1);
  
 int M[filas][cols];

 for (i=0;i<filas;i++)
   {
     for (j=0;j<cols;j++)
     {
       printf ("Introduce elemento [%d,%d]:", i,j);
       scanf ("%d", &M[i][j]);
     }
   }

  printf("\n");
  
  mayor=M[0][0];
  menor=M[0][0];
  pos_i_mayor=0;
  pos_j_mayor=0;
  pos_i_menor=0;
  pos_j_menor=0;
  
  for (i=0;i<filas;i++)
   {
     for (j=0;j<cols;j++)
     {
       if (M[i][j] > mayor)
         {
          mayor=M[i][j];
          pos_i_mayor=i;
          pos_j_mayor=j;
         }
       if (M[i][j] < menor)
         {
          menor=M[i][j];
          pos_i_menor=i;
          pos_j_menor=j;
         }
     }
   }

  printf ("El número mayor de la matriz es %d y está en la posición M[%d][%d]\n", mayor, pos_i_mayor,pos_j_mayor);
  printf ("El número menor de la matriz es %d y está en la posición M[%d][%d]\n", menor, pos_i_menor,pos_j_menor);
 
 printf ("¿Otra vez? (s ó S):");
 scanf ("%s", &respuesta);
 }while (respuesta=='s' || respuesta=='S');	
	
}
