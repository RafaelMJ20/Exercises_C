#include <stdio.h>


main ()
{
  int n,i, primo;
  char respuesta;

do
 { 
  printf ("Introduce un número mayor que 2: ");
  scanf ("%d", &n);

  while (n<=2)
  {
    printf ("Introduce un número mayor que 2: ");
    scanf ("%d", &n);
  }
  primo=1;
  for (i=2;i<n;i++)
   {
     if (n%i==0)
       primo=0;
   }

  if (primo==0)
    printf ("El número %d no es primo\n", n);
  else
    printf ("El número %d es primo\n", n);
 
 printf ("¿Otra vez? (s ó S):");
 scanf ("%s", &respuesta);
 }while (respuesta=='s' || respuesta=='S');	
	
}
