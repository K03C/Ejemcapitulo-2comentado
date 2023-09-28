#include <stdio.h>
/* ventas descendentes.
El programa, al recibir como datos tres valores que representan las ventas
➥de los vendedores de una tienda de discos, escribe las ventas en
➥orden descendente.
P, S y R: variables de tipo real. */

void main(void) //Funcion Principla
{
    float P, S, R; //Se declara la variable P, S y R como flotantes

    printf("\nIngrese las ventas de los tres vendedores: "); //imprime por pantalla el mandato

    scanf("%f %f %f", &P, &S, &R); //Leer dato de entrada y lo guardar en la variable P, S y R

    if (P > S)// se acondiciona si P mayor a S y se crea una concatenacion de condiciones para determinar que numero es mayo y ordenarlo, utilizando los if y los else
        if (P > R)
            if (S > R)
                printf("\n\n El orden es P, S y R: % 8.2f % 8.2f % 8.2f", P, S, R);
            else
                printf("\n\n El orden es P, R y S: % 8.2f % 8.2f % 8.2f", P, R, S);
        else
            printf("\n\n El orden es R, P y S: % 8.2f % 8.2f % 8.2f", R, P, S);
    else if (S > R)
        if (P > R)
            printf("\n\n El orden es S, P y R: % 8.2f % 8.2f % 8.2f", S, P, R);
        else
            printf("\n\n El orden es S, R y P: % 8.2f % 8.2f % 8.2f", S, R, P);
    else
        printf("\n\n El orden es R, S y P: % 8.2f % 8.2f % 8.2f", R, S, P);
        // fin del programa
}
