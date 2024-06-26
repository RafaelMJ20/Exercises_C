#include <stdio.h>
main() 
{
    int a, b, option;
    float resoult;

    printf ("Introduzca un valor: \n");
    scanf ("%d", &a);
    printf ("Introduzca un segundo valor: \n");
    scanf ("%d", &b);
    printf ("Elija 1 para sumar, 2 para restar, 3 para multiplicar o 4 para dividir: \n");
    scanf ("%d", &option);

    switch (option)
    {
	case 1:
	{
	resoult=(int)a+b;
	printf ("%d mas %d es igual a %d \n", a, b, resoult);
	break;
	}
	case 2:
	{
	resoult=(int)a-b;
	printf ("%d menos %d es igual a %d \n", a, b, resoult);
	break;
	}
	case 3:
	{
	resoult=(int)a*b;
	printf ("%d por %d es igual a %d \n", a, b, resoult);
	break;
	}
	case 4:
	{
	if (b==0)
		printf ("Es indeterminado \n");
	else
		{		
		resoult=(float)a/b;
		printf ("%d entre %d es igual a %f \n", a, b, resoult);
		}	
	break;
	}
	default:
	{
	printf ("Opcion inexistente \n");
	break;
	}
     }
}
