#include <stdio.h>
#include <stdlib.h>

/* Cuenta-numero.
El programa, al recibir como datos un arreglo unidimencional de tipo
entero y un numero entero, determina cuantas veces se encuentra el
numero en el arreglo. */

void main(void)
{
int I, NUM, CUE = 0;
int ARRE[100];                            /* Declaraci�n del arreglo */
for (I=0; I<100; I++)
{
 printf(�Ingrese el elemento %d del arreglo: �, I+1);
 scanf(�%d�, &ARRE[I]);           /* Lectura -asignaci�n� del arreglo */
}
printf(�\n\nIngrese el n�mero que se va a buscar en el arreglo: �);
scanf(�%d�, &NUM);
for (I=0; I<100; I++)
  if (ARRE[I] == NUM)    /* Comparaci�n del n�mero con los elementos del
                        arreglo */
       CUE++;
printf(�\n\nEl %d se encuentra %d veces en el arreglo�, NUM, CUE);
}
