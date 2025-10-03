#include <stdio.h>
#include <string.h>

int main() 
{
    char string[50];
    printf("ingresa un texto para determinar su longitud ");
    scanf("%50s", string);
    int longitud = strlen(string);
    printf("la longitud del texto es de %d, el texto: %s", longitud, string);
    return 0;
}