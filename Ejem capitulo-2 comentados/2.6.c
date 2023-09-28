#include <stdio.h>
/* Incremento de salario.
El programa, al recibir como dato el nivel de un profesor, incrementa su
➥salario en función de la tabla 2.3.
NIV: variable de tipo entero.
SAL: variables de tipo real. */
void main(void) //Funcion Principal
{
float SAL; //Se declara la variable SAL como flotante

int NIV; // se decalra la variable NIV como entera

printf("Ingrese el nivel académico del profesor: "); // se imprime por pantalla el mandato

scanf("%d", &NIV); // Leer dato de entrada y lo guarda en la variable NIV
printf("Ingrese el salario: ");
scanf("%f", &SAL);  //Leer dato de entrada y lo guarda en la variable  SAL

switch(NIV) // se crea un condicionante de casos con la variable NIV

printf("ingrese el salario: ");
scanf("%f", &SAL);

switch(NIV)
{
case 1: SAL = SAL * 1.0035; break; // si la variable Sal es igual a 1 se multiplica por 1.0035 y se guarda en ella misma

case 2: SAL = SAL * 1.0041; break; // si la variable Sal es igual a 2 se multiplica por 1.0041 y se guarda en ella misma

case 3: SAL = SAL * 1.0048; break;// si la variable Sal es igual a 1 se multiplica por 1.0048 y se guarda en ella misma

case 4: SAL = SAL * 1.0053; break;// si la variable Sal es igual a 1 se multiplica por 1.0053 y se guarda en ella misma
}
printf("\n\nNivel: %d \tNuevo salario: %8.2f",NIV, SAL); // imprime el resultado que se encuentra en la variable NIV y en SAL
}
