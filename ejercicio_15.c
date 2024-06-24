#include <stdio.h>
main() 
{
    int a,i;

    printf ("Introduzca un valor: \n");
    scanf ("%d", &a);
    
    for (i=1;i<=10;i++)
      printf ("%d por %d es igual a %d \n", a,i,a*i);
    
    
}
