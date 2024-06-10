#include <stdio.h>


main ()
{
  int anno;
  char respuesta;

do
 { 
  printf ("Introduce un año mayor que 1: ");
  scanf ("%d", &anno);

  while (anno<=1)
  {
    printf ("Introduce un año mayor que 1: ");
    scanf ("%d", &anno);
  }
  
  if (anno%400==0)
     printf ("El año %d es bisiesto\n", anno);
  else if (anno%4==0 && anno%100!=0)
         printf ("El año %d es bisiesto\n", anno);
       else
         printf ("El año %d no es bisiesto\n", anno);
      
  
 
 printf ("¿Otra vez? (s ó S):");
 scanf ("%s", &respuesta);
 }while (respuesta=='s' || respuesta=='S');	
	
}
