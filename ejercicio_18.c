#include <stdio.h>


main ()
{
  int i,j,aux, V[10];
  char respuesta;

do
 { 
  
  for (i=0;i<10;i++)
   {
     printf ("Introduce elemento %d:", i+1);
     scanf ("%d", &V[i]);
   }

 printf("Vector Desordenado\n");

 for (i=0;i<10;i++)
   {
     printf ("Elemento %d: %d", i+1, V[i]);
     printf ("\n");
   }

 for (i=0;i<10;i++)
   {
     for (j=i+1;j<10;j++)
       {
         if (V[i]>V[j])
           {
             aux=V[i];
             V[i]=V[j];
             V[j]=aux;
           }
       }
   }
   
  printf("Vector Ordenado\n");

 for (i=0;i<10;i++)
   {
     printf ("Elemento %d: %d", i+1, V[i]);
     printf ("\n");
   }
 printf ("¿Otra vez? (s ó S):");
 scanf ("%s", &respuesta);
 }while (respuesta=='s' || respuesta=='S');	
	
}
