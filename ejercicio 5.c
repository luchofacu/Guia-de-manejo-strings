/******************************************************************************

STRINGS

5) El usuario ingresa una palabra. Mostrar en pantalla cuántas vocales minúsculas y mayúsculas contiene.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

char correccion(char *palabra);

int main(){

	int i, j, f, contMayus=0, contMinus=0, cont=0;

	char mayus[5] = {'A', 'E', 'I', 'O', 'U'}; 
	char minus[5] = {'a', 'e', 'i', 'o', 'u'};
	char palabra[20];

	printf("Ingrese una palabra: "); 
	fgets(palabra,20,stdin);
	correccion(&palabra);

	for (i=0 ; i<20 && f==0 ; i++){ 
		if (palabra[i] == '\0'){
			f=1;
		}
		else{
			cont++;
		}
	}

	for (i=0 ; i<20 ; i++){              
		for (j=0 ; j<5 ; j++){
			if (palabra[i] == mayus[j]){
				contMayus++;
			}                                
			if (palabra[i] == minus[j]){
				contMinus++;
			}
		}		
	}

	printf ("La palabra %s tiene %d vocales minusculas y %d vocales mayusculas.",palabra,contMinus,contMayus);


	return 0;
}

char correccion(char *palabra){

	for (int i=0 ; i<20 ; i++){
		if (palabra[i] == '\n'){
			palabra[i] = '\0';
		}
	}
	return (palabra);
}