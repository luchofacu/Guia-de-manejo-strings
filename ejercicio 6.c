/******************************************************************************

STRINGS

6) El usuario ingresa una palabra. Determinar qué letra aparece mayor cantidad de veces. 
Para simplificar el problema, trabaje solo con mayúsculas. 

*******************************************************************************/
#include<stdio.h>
#include <string.h>

int main(){
	
	char palabra[19];
	int abecedario[26];
	int i = 0;
	int j = 0;
	int maximo = 0;
	int contador = 0;
	int letrarepe = 0;
	char letramax;
	
	printf("Ingrese una palabra: ");
	scanf("%s", palabra);
	
	do{             //Se cuenta la cantidad de letras que tiene la palabra ingresada.
	    contador++;     
	}
	while(palabra[i++] != '\0'); 
	
	for(i=0; i<=26; i++){
		abecedario[i] = 0; //Se inicializa el vector abecedario con todas sus posiciones en 0.
	}
	 
    for(i=0; i<=contador - 1; i++)
    {
        for(j=0; 65+j<=90; j++)
        {
            if(palabra[i] == 65+j){
                abecedario[j] = abecedario[j] + 1;
            }   
        }
    }
    
    for(i=0; i<=26; i++)
	{
		if(abecedario[i] > maximo)
		{
			maximo = abecedario[i];
			letramax = i + 65;
		}
		
		
	}	
	
	for(i=0; i<=26; i++)
	{
        if(abecedario[i] == maximo && abecedario[i]!= 0)
        {
            letrarepe = 1;
        }
	}
        	
    if(letrarepe == 1){
        printf("Mas de una letra aparece mayor cantidad de veces.");
    }
    else
    {
        printf("La letra que mas se repite es: %i", letramax);
    }
	
	return 0;
}