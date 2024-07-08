#include <stdio.h>


main ()
{
  int i, V[10];
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

 for (i=0;i<10;i++)
   {
     printf ("Elemento %d: %d", i+1, V[i]);
     printf ("\n");
   }
  
 
 printf ("¿Otra vez? (s ó S):");
 scanf ("%s", &respuesta);
 }while (respuesta=='s' || respuesta=='S');	
	
}
