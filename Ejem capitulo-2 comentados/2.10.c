#include <stdio.h>
#include <math.h>
/* Par, impar o nulo.
NUM: variable de tipo entero. */
void main(void) // funcion principal
{
    int NUM; // Delcaracion de la variable NUM como  entera

    printf("Ingrese el número: "); //imprime en pantalla el mandato

    scanf("%d", &NUM);  //Lee los datos de entrada y lo alamcena en las variables asignadas

    if (NUM == 0)   //acondiciona que si la variable NUM es igual a 0 imprimira 0

        printf("\nNulo");

    else if (pow(-1, NUM) > 0) //entonces De lo contrario imprimira los siguiente

        printf("\nPar");
    else                    // de lo contrario imprimira que es impar
        printf("\nImpar");
        //Fin del programa
}
