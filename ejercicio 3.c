/******************************************************************************

STRINGS

3) El usuario ingresa dos strings. Mostrar en pantalla si son iguales o no, es decir, si tienen las mismas letras en las mismas posiciones.


*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char S1[50],S2[50];
    int i, z=0, aux=0,aux1=0,aux2=0;
    printf("Ingrese una palabra: ");
    fgets(S1,50,stdin);
    
    printf("Ingrese una palabra: ");
    fflush(stdin);
    fgets(S2,50,stdin);
    
    for (i=0 ; i<20 && z==0 ; i++){          
		if (S1[i] == '\n'){
			z=1;
		}
		else{
			aux1++;
		}
	}
	
	z=0;                                        
	for (i=0 ; i<20 && z==0 ; i++){
		if (S2[i] == '\n'){
			z=1;
		}
		else{
			aux2++;
		}
	}
	if (aux1 != aux2){ 
		printf ("Las dos strings no son iguales.");
		return 0;
	}
	z=0;
	
	for(i=0;i<aux1;i++){  
        if(S1[i]!=S2[i])
            z = 1;
    }
	if (z == 0){  
		printf ("Las dos strings son iguales.");
	}
	else{
		printf ("Las dos strings no son iguales.");
	}
}
	
 