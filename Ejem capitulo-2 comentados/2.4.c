#include <stdio.h>
/* incremento de precio.
El programa, al recibir como dato el precio de un producto, incrementa al
➥mismo 11% si es menor a 1500$ y 8% en caso contrario (mayor o igual).
PRE y NPR: variables de tipo real. */
void main(void) // FUNCION PRINCIPAL
{
    float PRE, NPR; // Declaracion de las variables flotantes PRE y NPR

    printf("Ingrese el precio del producto: "); // Imprime el mandato que es lo que esta en parentesis

    scanf("%f", &PRE); ////Leer dato de entrada y guardarlo en la variable PRE

    if (PRE < 1500) // acondiciona si PRE es menor a 1500 se multiplicara por 1.11 y se guardara enla variable NPR
        NPR = PRE * 1.11;
    else            // De lo contrario se multiplicara por 1.08 y se guardara en la variable NPR
        NPR = PRE * 1.08;
    printf("\nNuevo precio del producto: %8.2f", NPR); // imprimira el valor de NPR con un mandato

}//Fin del programa
