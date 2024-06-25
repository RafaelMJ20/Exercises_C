#include <stdio.h>


main ()
{
  int neg, pos, n;
  char respuesta;

do
 { 
  neg=0;
  pos=0;
  printf ("Introduce un valor: ");
  scanf ("%d", &n);
  
  while (n!=0)
    {
      if (n<0)
       neg=neg+1;
      else
       pos=pos+1;
      
      printf ("Introduce un valor: ");
      scanf ("%d", &n);
    }
  printf ("Se ha leído %d números positivos\n", pos);
  printf ("Se ha leído %d números negativos\n", neg);
  printf ("¿Otra vez? (s ó S):");
  scanf ("%s", &respuesta);
 }while (respuesta=='s' || respuesta=='S');	
}
