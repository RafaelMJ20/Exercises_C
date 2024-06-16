#include <stdio.h>


main ()
{
  int contador, n;
  char respuesta;

do
 { 
  contador=0;
  printf ("Introduce un valor: ");
  scanf ("%d", &n);
  
  while (n!=0)
    {
      contador=contador+1;
      printf ("Introduce un valor: ");
      scanf ("%d", &n);
    }
  printf ("Se ha leído %d números\n", contador);
  printf ("¿Otra vez? (s ó S):");
  scanf ("%s", &respuesta);
 }while (respuesta=='s' || respuesta=='S');	
}
