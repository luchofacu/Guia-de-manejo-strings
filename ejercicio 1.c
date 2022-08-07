/******************************************************************************

STRINGS

1) Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cuántas letras tiene la palabra ingresada.
Por ejemplo "CASA" debe indicar 4 letras.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	char palabra[21];
	char *p;
	int letras=0;
printf("Ingrese la palabra: ");
scanf("%s",&palabra);

	p = palabra ;
	while (*p != '\0') {
		letras++;
		printf( "%c\n", *p );	
		p++;			
	}
	printf( "La palabra \"%s\" tiene %i letras.\n\n", palabra, letras);
}

