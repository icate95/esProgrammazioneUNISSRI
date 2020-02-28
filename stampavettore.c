// stampavettore.c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i; //l'indice per i nostri cicli for
    int B[5];
    B[0] = 4;
    B[1] = 3;
    B[2] = 2;
    B[3] = 1;
    B[4] = 0;
    // aggiungi il codice che manca (1 ciclo for contenente una printf)
    for (i = 0; i < 5; i++)
    {
        printf("L'elemento %d del vettore B contiene %d \n", i, B[i]);
    }
}