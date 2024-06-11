#include <stdio.h>


main ()
{
  int i,n, encontrado, V[10];
  char respuesta;

do
 { 
  
  for (i=0;i<10;i++)
   {
     printf ("Introduce elemento %d:", i+1);
     scanf ("%d", &V[i]);
     printf ("\n");
   }

 printf("\n\n");

 printf ("Introduce el elemento que quieres buscar: ");
 scanf ("%d", &n);
 printf ("\n");

 encontrado=0;
 for (i=0;i<10;i++)
   {
     if (V[i]==n)
        {
         printf ("%d está en la posición %d", n, i+1);
         encontrado=1;
         printf ("\n");
        }  
   }
  
 if (encontrado==0)
   printf ("%d no está en el vector", n);

 printf ("¿Otra vez? (s ó S):");
 scanf ("%s", &respuesta);
 }while (respuesta=='s' || respuesta=='S');	
	
}
