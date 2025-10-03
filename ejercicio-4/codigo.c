#include <stdio.h>

void imprimirFecha(int dia, int mes, int anio);

int main()
{
    int dia, mes, anio;
    printf("ingresa el dia ");
    scanf("%d", &dia);
    printf("ingresa el mes ");
    scanf("%d", &mes);
    printf("ingresa el anio ");
    scanf("%d", &anio);

    imprimirFecha(dia, mes, anio);
    return 0;
}

void imprimirFecha(int dia, int mes, int anio) {
    char* fechas[] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
    printf("%d de %s de %d", dia, fechas[mes - 1], anio); // empieza en cero, por lo tanto le resto por - 1 asi puedo usar 1 para enero
}