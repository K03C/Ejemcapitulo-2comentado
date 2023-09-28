#include <stdio.h>
/* Incremento de precio.
El programa, al recibir como dato el precio de un producto importado,
➥incrementa 11% el mismo si éste es inferior a $1,500.
PRE y NPR: variable de tipo real. */
void main(void) // funcion principal
{
float PRE, NPR; // declaracion de las varibles flotantes PRE y NPR

printf( "ingrese el precio del producto:");// Imprime en consola el mandato

scanf("%f", &PRE);// Lee el dato de entrada y se guarda en la variable PRE

if (PRE > 1500)// Acondiciona si PRE es mayo a 1500  entonces se multiplicara PRE por la constante 1.11 y el reusltado se guardara en NPR
    {
    NPR = PRE * 1.11;
    printf("\nNuevo precio: %7.2f",NPR);// imprime el nuevo precio que es la variable NPR
    }
}
