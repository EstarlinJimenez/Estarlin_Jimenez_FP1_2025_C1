#include <stdio.h>
#include <stdlib.h>

/* Nomina de profesores.
El programa, al recibir como datos los salarios de los profesores de una
universidad, obtiene la n�mina y el promedio de los salarios.

I: variable de tipo entero. */
SAL, NOM Y PRO: variables de tipo real. */

void main(void)
{
int I = 0;
float SAL, PRO, NOM = 0;
printf("Ingrese el salario del profesor:\t");
/* observa que al menos se necesita ingresar el salario de un profesor para que
no ocurra un error de ejecucion de programa. */
scanf("%f", &SAL);
do
{
    NOM = NOM + SAL;
    I = I + 1;
    printf(�Ingrese el salario del profesor -0 para terminar- :\t�);
    scanf("%f", &SAL);
}
while (SAL);
PRO = NOM / I;
printf("\nN�mina: %.2f \t Promedio de salarios: %.2f", NOM, PRO);
}

