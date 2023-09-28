#include <stdio.h>
#include <math.h>
/* Expresión.
El programa, al recibir como datos tres valores enteros, establece si los
➥mismos satisfacen una expresión determinada.
R, T y Q: variables de tipo entero.
RES: variable de tipo real. */
void main(void) // funcion Principak
{
    float RES; // Delcaracion de las variable RES como  flotante

    int R, T, Q; // Delcaracion de las variables R, T y Q como variables flotantes

    printf("Ingrese los valores de R, T y Q: ");// imprime por pantalla el mandato

    scanf("%d %d %d", &R, &T, &Q);  //Lee los datos de entrada y lo alamcena en las variables asignadas

    RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2); //iguala a RES en el resultado de una expresion determianda

    if (RES < 820)  // acondiciona que si la variable RES es menor a 820 pues imrpime por pantalla el valor de las variables
        printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);

    //Fin del programa
}
