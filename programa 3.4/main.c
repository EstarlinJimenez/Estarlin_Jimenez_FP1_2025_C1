#include <stdio.h>
#include <stdlib.h>

/* Suma cuadrados.
El programa, al recibir como datos un grupo de enteros positivos, obtiene el
cuadrado de los mismos y la suma correspondiente a dichos cuadrados. */

void main(void)
{
int NUM;
long CUA, SUC = 0;
printf("\nIngrese un numero entero 0 para terminar-:\t");
scanf("%d", &NUM);
while (NUM)
/* observa que la condicion es verdadera mientras el entero es diferente de cero. */
{
    CUA = POW (NUM, 2);
    printf("%d", al cubo es %1d", NUM, CUA);
    SUC = SUA + CUA;
    printf("\nIngrese un numero entero -0 para terminar-:\f");
    scanf("%d", %NUM);
}
printf("\nLa suma de los cuadrados es %1d", SUC);
}
