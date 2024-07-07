#include <stdio.h>

main ()
{
  float sueldo;
  int categoria, horas;

  printf ("Introduce las horas trabajadas:");
  scanf ("%d", &horas);
  printf ("\n");
  printf ("Introduce la categoria del trabajador:");
  scanf ("%d", &categoria);
  printf ("\n");

  if (categoria!=1 && categoria!=2)
    {
      printf ("Categoría errónea \n");
    }
  else if (categoria==1)
         {
           sueldo=horas*12;
           printf ("El empleado ha trabajado %d  horas\n", horas);
           printf ("Pertenece a la categoria %d  \n", categoria);
           printf ("Y le corresponde un suelde de %f euros\n", sueldo);
         }
       else
         {
           sueldo=horas*9;
           printf ("El empleado ha trabajado %d  horas\n", horas);
           printf ("Pertenece a la categoria %d  \n", categoria);
           printf ("Y le corresponde un sueldo de %f euros\n", sueldo);
         }
}
