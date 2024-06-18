#include <stdio.h>


main ()
{
  int contador, n, suma;
  char respuesta;

do
 { 
  suma=0;
  contador=0;
  printf ("Introduce un valor: ");
  scanf ("%d", &n);
  
  while (n!=0)
    {
      contador=contador+1;
      suma=suma+n;
      printf ("Introduce un valor: ");
      scanf ("%d", &n);
    }
  printf ("Se ha leído %d números\n", contador);
  printf ("Que suman %d \n", suma);
  printf ("¿Otra vez? (s ó S):");
  scanf ("%s", &respuesta);
 }while (respuesta=='s' || respuesta=='S');	
}
