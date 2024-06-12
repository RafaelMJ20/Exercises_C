#include <stdio.h>
#define PI 3.141592

main ()
{
  float radio, area, longitud, volumen;
 
  printf ("Introduce un valor para el radio: ");
  scanf ("%f", &radio);
  longitud=2*PI*radio;
  area=PI*radio*radio;
  volumen=(4*PI*radio*radio*radio)/3;
  printf ("La circunferencia de radio %f tiene una longitud de %f cm \n",radio,longitud);
  printf ("El circulo de radio %f tiene un area de %f cm cuadrados \n", radio,area);
  printf ("La esfera de radio %f tiene un volumen de %f cm cúbicos\n", radio,volumen);
	
}
