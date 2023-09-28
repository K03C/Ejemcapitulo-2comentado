#include <stdio.h>
#include <math.h>
/* Función matemática.
El programa obtiene el resultado de una función.
OP y T: variables de tipo entero.
RES: variable de tipo real. */
void main(void) //FUNCION PRINCIPAL
{
int OP, T; //Declaracion de variables globales OP y T como enteras

float RES; // declaracion de RES como una variable flotante

printf("Ingrese la opción del cálculo y el valor entero: "); //Imprime el mandato por pantalla

scanf("%d %d", &OP, &T);//Leer dato de entrada y guardarlo en la variable OP y en T

switch(OP){             // Condiciona por casos la varia OP, depende lo ingresado  se tendra un resultado diferente

    case 1: RES = T / 5; // en el caso de 1 se divide T entre 5 y se guarda en RES
        break;
    case 2: RES = pow(T,T);     //en el caso de 2  de eleva T a si misma con la funcion POW  que es de la libreria Math.h
/* La función pow está definida en la biblioteca math.h */
        break;

    case 3: // En el caso 3 se divide t entre 2 y se multiplica por 6
        case 4: RES = 6 * T/2;
    break;
    default: RES = 1; //si no es ninc=gun caso entonces RES se igualara a 1
    break;
}
printf("\nResultado: %7.2f", RES); //imprime el resultado que esta en la variable RES
}
