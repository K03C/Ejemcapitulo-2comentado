#include <stdio.h> //Libreria a utilizar
/* Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso
➥universitario, escribe aprobado si su promedio es mayor o igual a 6.
PRO: variable de tipo real. */

void main(void)//Funcion Principal
{
    float PRO; //Declaracion de variable flotante

    printf("ingrese el promedio del alumno: "); // imprimir por consola el

    scanf("%f", &PRO); //Leer dato de entrada y guardarlo en la variable

    if (PRO >= 6) // condicion, si la variable PRO es mayor o igual a 6 imprime "Aprobado".
        printf("\nAprobado");
}
