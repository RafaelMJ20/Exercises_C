#include <stdio.h>

main ()
{
  int a, b;

  printf ("Introduce el valor del primer número:");
  scanf ("%d", &a);
  printf ("\n");
  printf ("Introduce el valor del segundo número:");
  scanf ("%d", &b);
  printf ("\n");

  if (a==b)
    {
      printf ("El primer número, %d y el segundo, %d, son iguales \n", a, b);
    }
  else if (a>b)
         {
           printf ("El primer número, %d es mayor que el segundo, %d \n", a, b);
         }
       else
         {
           printf ("El segundo número, %d es mayor que el primero, %d \n", b, a);
         }
}
