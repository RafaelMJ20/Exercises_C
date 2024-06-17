#include <stdio.h>


main ()
{
  int neg, pos, n, contador, pares, impares;
  char respuesta;

do
 { 
  contador=0;
  neg=0;
  pos=0;
  pares=0;
  impares=0;
  printf ("Introduce un valor: ");
  scanf ("%d", &n);
  
  while (n!=0)
    {
      contador=contador+1;

      if (n<0)
       neg=neg+1;
      else
       pos=pos+1;
      
      if(n%2==0)
        pares=pares+1;
      else
        impares=impares+1;
      printf ("Introduce un valor: ");
      scanf ("%d", &n);
    }
  printf ("Se ha leído %d números \n", contador);
  printf ("Se ha leído %d números positivos\n", pos);
  printf ("Se ha leído %d números negativos\n", neg);
  printf ("Se ha leído %d números pares\n", pares);
  printf ("Se ha leído %d números impares\n", impares);
  printf ("¿Otra vez? (s ó S):");
  scanf ("%s", &respuesta);
 }while (respuesta=='s' || respuesta=='S');	
}
