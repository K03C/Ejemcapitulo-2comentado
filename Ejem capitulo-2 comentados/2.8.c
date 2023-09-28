#include <stdio.h>
/* Asistentes.
El programa, al recibir como datos la matrícula, la carrera, el semestre
➥y el promedio de un alumno de una universidad privada, determina si
➥éste puede ser asistente de su carrera.
MAT, CAR y SEM: variables de tipo entero.
PRO: variable de tipo real. */
void main(void) //Funcion Principal
{
    int MAT, CAR, SEM; // Delcaracion de las variables MAT, CAR y SEM como variables enteras

    float PRO;  // Delcaracion de las variable PRO como  flotante

    printf("Ingrese matrícula: "); //Se imprime en pantalla el mandato

    scanf("%d", &MAT);  //Leer dato de entrada y lo guardar en la variable
    printf("Ingrese carrera(1 - Industrial 2 - Telemática 3 - Computación 4 - Mecánica): ");
    scanf("%d", &CAR);
    printf("Ingrese semestre: ");
    scanf("%d", &SEM);
    printf("Ingrese promedio: ");
    scanf("%f", &PRO);
    switch (CAR) //acondicionamiento de caso de la varibale CAR
    {
    case 1:             // si la variable es igual uno y cumple la condicion doble imprime el valor de las varibles en pantalla
        if (SEM >= 6 && PRO >= 8.5)
            printf("\n %d %d %5.2f", MAT, CAR, PRO);
        break;
    case 2:     // si la variable es igual dos y cumple la condicion doble imprime el valor de las varibles en pantalla
        if (SEM >= 5 && PRO >= 9.0)
            printf("\n %d %d %5.2f", MAT, CAR, PRO);
        break;
    case 3:     // si la variable es igual tres y cumple la condicion doble imprime el valor de las varibles en pantalla
        if (SEM >= 6 && PRO >= 8.8)
            printf("\n %d %d % 5.2f", MAT, CAR, PRO);
        break;
    case 4:     // si la variable es igual cuatro y cumple la condicion doble imprime el valor de las varibles en pantalla
        if (SEM >= 7 && PRO >= 9.0)
            printf("\n %d %d %5.2f", MAT, CAR, PRO);
        break;
    default:    //si no es ninguno de los casos  imprimira el siguiente dato: error de la carrera
        printf("\n Error en la carrera");
        break;
    }
    //fin del programa
}
