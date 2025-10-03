#include <stdio.h>

int determinarLongitud(char string[]);

int main() 
{
    char string[50];
    printf("ingresa un texto para determinar su longitud ");
    scanf("%50s", string);
    int longitud = determinarLongitud(string);
    printf("la longitud del texto es de %d, el texto: %s", longitud, string);
    return 0;
}

int determinarLongitud(char string[]) {
    int i = 0;
    while(string[i] != '\0') { // huy, cuando termine el vector sali del while
        i++;
    }
    return i;
}