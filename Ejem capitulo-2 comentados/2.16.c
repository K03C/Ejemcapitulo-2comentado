#include <stdio.h>
/* Empresa textil.
El programa, al recibir como datos decisivos la categoría y antigüedad de
➥un empleado, determina si el mismo reúne las condiciones establecidas por
➥la empresa para ocupar un nuevo cargo en una sucursal.
CLA, CAT, ANT, RES: variables de tipo entero.
SAL: variable de tipo real. */
void main(void) //Funcion Principal
{
    int CLA, CAT, ANT, RES;// Delcaracion de las variables CLA, ANT, CAT y RES como variables enteras

    printf("\nIngrese la clave, categoría y antigüedad del trabajador:");//imprime en pantalla el mandato
    scanf("%d %d %d", &CLA, &CAT, &ANT);//Lee los datos de entrada y lo alamcena en las variables asignadas
    switch (CAT) //Se crea un acondicionamiento de casos donde determina los casos la varibale CAT
    {
    case 3:
    case 4:
        if (ANT >= 5) // dentro de algunos casos hay condiciones concatenadoas con sus else
            RES = 1;
        else
            RES = 0;
        break;
    case 2:
        if (ANT >= 7)
            RES = 1;
        else
            RES = 0;
        break;
    default: // si no se cumple ningun caso RES se igualara a 0
        RES = 0;
        break;
    }
    if (RES) //Se acondiciona la vairable Res para determinar el mensaje final
        printf("\nEl trabajador con clave %d reúne las condiciones para el ➥puesto", CLA);
    else
        printf("\nEl trabajador con clave %d no reúne las condiciones para ➥el puesto", CLA);
        //Fin del programa
}
