#include <stdio.h>

main ()
{
  float lado, area;

  printf ("Introduce el valor del lado:");
  scanf ("%f", &lado);
  printf ("\n");
  area=lado*lado;
  printf ("El cuadrado de lado %f cm, tiene un área de %f cm cuadrados\n", lado, area);
}
