#include <stdio.h>
#include <math.h>
/* Función.
El programa, al recibir como dato un valor entero, calcula el resultado de
➥una función.
Y: variable de tipo entero.
X: variable de tipo real. */
void main(void)     // funcion principal
{
    float X;   // Delcaracion de las variable X como  flotante

    int Y;  // Delcaracion de las variable Y como  ENTERA

    printf("Ingrese el valor de Y: ");//imprime en pantalla el mandato

    scanf("%d", &Y);    //Lee los datos de entrada y lo alamcena en las variables asignadas

    if (Y<0 || Y> 50)   //condicion doble, si y es menor a 0 o mayor a 50 x es igual a 0
        X = 0;
    else if (Y <= 10) //Si y es menor o igual a 10 x es iguala 4 sobre y menos y
        X = 4 / Y - Y;
    else if (Y <= 25) //Si es menor o igual a 25 x es igual a y elevado a las 3 menos 12
        X = pow(Y, 3) - 12;
    else
        X = pow(Y, 2) + pow(Y, 3) - 18;
    printf("\n\nY = %d \tX = %8.2f", Y, X);// imprime el resultado

    //fin del programa
}
