#include <stdio.h>
/* Teléfono.
El programa, al recibir como datos la clave de la zona geográfica y el
➥número de segundos de una llamada telefónica, calcula el costo de la misma.
CLA y TIE: variables de tipo entero.
COS: variable de tipo real. */
void main(void) // funcion principal
{
int CLA, TIE; // Delcaracion de las variables CLA, TIE y como variables enteras

float COS;  // Delcaracion de las variable COS como  flotante

printf("Ingresa la clave y el tiempo: "); // //imprime en pantalla el mandato

scanf("%d %d", &CLA, &TIE);//Lee los datos de entrada y lo alamcena en las variables asignadas

switch(CLA) //Acondiciona por casos la varianble  ClA
{
case 1: COS = TIE * 0.13 / 60; break; // Si CLA es uno entonces COS es igual a TIE por la constante 0.13 dividido entre 60

case 2: COS = TIE * 0.11 / 60; break;// Si CLA es dos entonces COS es igual a TIE por la constante 0.11 dividido entre 60

case 5: COS = TIE * 0.22 / 60; break;// Si CLA es cinco entonces COS es igual a TIE por la constante 0.22 dividido entre 60
case 6: COS = TIE * 0.19 / 60; break;// Si CLA es seis entonces COS es igual a TIE por la constante 0.19 dividido entre 60
case 7:
case 9: COS = TIE * 0.17 / 60; break;// Si CLA es nueve entonces COS es igual a TIE por la constante 0.17 dividido entre 60
case 10: COS = TIE * 0.20 / 60; break;// Si CLA es diez entonces COS es igual a TIE por la constante 0.20 dividido entre 60
case 15: COS = TIE * 0.39 / 60; break;// Si CLA es quince entonces COS es igual a TIE por la constante 0.39 dividido entre 60
case 20: COS = TIE * 0.28 / 60; break;// Si CLA es veinte entonces COS es igual a TIE por la constante 0.28 dividido entre 60

default : COS = -1; break;  // si no es ninguna de las opciones encontes COS se igualara a -1
}
if (COS != -1) // si COS es igual a -1 se imprime las variables
printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f", CLA, TIE, COS);
else        // de lo contrario imprime error
printf("\nError en la clave");
//fin del programa
}
