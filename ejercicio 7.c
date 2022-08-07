7) El usuario ingresará 5 nombres de personas y sus edades (número entero). 
Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona más joven.
El ingreso se realiza de este modo: nombre y edad de la primera persona, luego nombre y edad de la segunda, etc...
Nota: no hay que almacenar todos los nombres y todas las notas.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

struct persona
{
	char nombre[15];
	int edad;
};

int main(){

	int i, max=0;

	struct persona persona[5];

	for (i=0 ; i<5 ; i++){
		printf("Ingrese el nombre de la persona: ");
		scanf("%s",&persona[i].nombre);
		printf("Ingrese la edad de la persona: ");
		scanf("%d",&persona[i].edad);

		if (persona[i].edad >= persona[max].edad){
			max = i;
		}
	}
	printf ("La persona con mayor edad es %s", persona[max].nombre);
} 