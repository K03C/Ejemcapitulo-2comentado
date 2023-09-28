#include <stdio.h>
/* Billete de ferrocarril.
El programa calcula el costo de un billete de ferrocarril teniendo en
➥cuenta la distancia entre las dos ciudades y el tiempo de permanencia
➥del pasajero.
DIS y TIE: variables de tipo entero.
BIL: variable de tipo real. */
void main(void) // Funcion Principal
{
    int DIS, TIE;// Delcaracion de las variables DIS Y TIE como variables enteras

    float BIL;// Delcaracion de las variable BIL como  flotante

    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: "); //imprime en pantalla el mandato

    scanf("%d %d", &DIS, &TIE);//Lee los datos de entrada y lo alamcena en las variables asignadas

    if ((DIS * 2 > 500) && (TIE > 10)) //Acondiciona doble si Dis por 2 es mayor a 500 y si TIE es mayo a 10

        BIL = DIS * 2 * 0.19 * 0.8; // guardara en BIL la multiplicion de Dis por 2 por 0.19 y por 0.8

    else                        // de lo contraio
        BIL = DIS * 2 * 0.19;
    printf("\n\nCosto del billete: %7.2f", BIL);// imprimira le resultado

    //fin del programa
}
