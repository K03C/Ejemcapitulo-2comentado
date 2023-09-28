#include <stdio.h>
/* Spa.
El programa, al recibir como datos el tipo de tratamiento, la edad y el
➥número de días de internación de un cliente en un spa, calcula el costo
➥total del tratamiento.
TRA, EDA, DIA: variables de tipo entero.
COS: variable de tipo real. */
void main(void)     //Funcion Principal
{
    int TRA, EDA, DIA; // Delcaracion de las variables TRA, EDA y DIA como variables enteras
    float COS;// Delcaracion de las variable COS como  flotante

    printf("Ingrese tipo de tratamiento, edad y días: ");//imprime en pantalla el mandato

    scanf("%d %d %d", &TRA, &EDA, &DIA);//Lee los datos de entrada y lo alamcena en las variables asignadas

    switch (TRA) //SE ACONDICONA POR CASOS EL VALOR DE LA VARIABLE A EN EL CASO 1,2,3,4 CADA UNO CON SU funcion

    {
    case 1:
        COS = DIA * 2800;
        break;
    case 2:
        COS = DIA * 1950;
        break;
    case 3:
        COS = DIA * 2500;
        break;
    case 4:
        COS = DIA * 1150;
        break;
    default:        // de lo contraio COS se igualara a -1
        COS = -1;
        break;
    }
    if (COS != -1) //Si COS es diferente a -1 entonces entra otra condicion
    {
        if (EDA >= 60)
            COS = COS * 0.75;
        else if (EDA <= 25) //Si no se cumple esta condicion  se va a la funcion final donde imprime un mensaje de error
            COS = COS * 0.85;

        printf("\nClave tratamiento: %d\t Días: %d\t Costo total: %8.2f",TRA, DIA, COS);
    }
    else
        printf("\nLa clave del tratamiento es incorrecta");
        //Fin del programa
