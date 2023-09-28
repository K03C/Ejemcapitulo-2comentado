#include <stdio.h>
/* Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso
➥universitario, escribe aprobado si su promedio es mayor o igual a 6, o
➥reprobado en caso contrario.
PRO: variable de tipo real. */

void main(void){// FUNCION PRINCIPAL

float PRO; // Declaracion de la variable PRO como flotante

printf("Ingrese el promedio del alumno: ");//Se imprime en pantalla el mandato

scanf("%f", &PRO);//Leer dato de entrada y guardarlo en la variable PRO

if (PRO >= 6.0)// acondiciona que si PRO es mayor o igual que 6 se imprimira aprobado
printf("\nAprobado");
else
printf("\nReprobado"); // de lo contrario se imprimira reprobado
}
