/******************************************************************************

STRINGS

2) Permitir el ingreso de una palabra y mostrarla en pantalla al revés.
Por ejemplo, para "CASA" se debe mostrar "ASAC".


*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char c,palabra[21];
    printf("Introduce una palabra: ");
    scanf("%s", palabra);
     i=0;
    
    while(palabra[i++]!= '\0');
    
    printf("%s Escrita del reves es:\n ", palabra);
    
    while(i>=0)
    printf("%c", palabra[i--]);
        
        printf("\n");
        return 0;
        
}