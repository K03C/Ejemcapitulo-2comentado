#include <stdio.h>
#include <math.h>
/* Igualdad de expresiones.
El programa, al recibir como datos T, P y N, comprueba la igualdad de
una expresión determinada.
T, P y N: variables de tipo entero. */

void main(void) // Funcion Principal
{
    int T, P, N;// Delcaracion de las variables T, P y N como variables enteras

    printf("Ingrese los valores de T, P y N: ");//imprime en pantalla el mandato

    scanf("%d %d %d", &T, &P, &N);  //Lee los datos de entrada y lo alamcena en las variables asignadas

    if (P != 0) //Acondiciona que si P ess diferente a 0 se cumple la condicion
    {
if (pow(T / P, N) == (pow(T, N) / pow(P, N)))
printf("\nSe comprueba la igualdad");
else                    //de lo contacio imprime el mensaje y el de el siguiente else
printf("\nNo se comprueba la igualdad");
    }
    else
printf("\nP tiene que ser diferente de cero");

//fin del programa
}
