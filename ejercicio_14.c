#include "stdio.h"

main ()
  {	
	int opcion;

  do 
    {	
	printf ("Menu de opciones \n");

        printf ("1.- Opción 1 \n");
	printf ("2.- Opción 2 \n");
        printf ("3.- Opción 3 \n");
        printf ("4.- Opción 4 \n");
        printf ("5.- SALIR \n");
        
        printf ("Indtroduzca una opción:");
        scanf ("%d", &opcion);

	switch (opcion)
	 {
		case 1:
		 {
		   printf ("\n Está en la opción 1 \n");
		   break;
		 }

		case 2:
		 {
		   printf ("\n Está en la opción 2 \n");
		   break;
		 }
		case 3:
		 {
		   printf ("\n Está en la opción 3 \n");
		   break;
		 }
		case 4:
		 {
		   printf ("\n Está en la opción 4 \n");
		   break;
		 }
                case 5:
                {
		   printf ("\n Fin del programa \n");
		   break;
		}
		
		default:
		 {
		   printf ("\n Opción incorrecta \n");
		   break;
		 }
	}
     }while(opcion !=5);
  }
