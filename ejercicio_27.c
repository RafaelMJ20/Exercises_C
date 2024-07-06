#include "stdio.h"

main ()
  {	
	char  caracter;
	
	printf ("\n Introduce un caracter:");
	scanf ("%c", &caracter);

	switch (caracter)
	 {
		case 'a':
		case 'A':
		 {
		   printf ("\n Ha introducido la vocal A \n");
		   break;
		 }

		case 'e':
		case 'E':
		 {
		   printf ("\n Ha introducido la vocal E \n");
		   break;
		 }
		case 'i':
		case 'I':
		 {
		   printf ("\n Ha introducido la vocal I \n");
		   break;
		 }
		case 'o':
		case 'O':
		 {
		   printf ("\n Ha introducido la vocal O \n");
		   break;
		 }
	
		case 'u':
		case 'U':
		 {
		   printf ("\n Ha introducido la vocal U \n");
		   break;
		 }
		default:
		 {
		   printf ("\n No has introducido una vocal \n");
		   break;
		 }
	}
  }
