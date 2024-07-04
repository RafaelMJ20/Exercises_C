#include <stdio.h>
#include <tgmath.h>

main() 
{
    int a,i;

    printf ("Introduzca un valor: \n");
    scanf ("%d", &a);
    
    for (i=1;i<=5;i++)
      printf ("%f \t", pow(a,i));
    printf ("\n");
    
}
