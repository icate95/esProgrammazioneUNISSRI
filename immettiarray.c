//programma immettiarray.c
#include <stdio.h>
#include <stdlib.h>
#define N 10
// usa opportunamente questa costante per impostare il numero dei cicli nel for
int main()
{
    int i; //l'indice per i nostri cicli for
    int C[N];
    // aggiungi qui il ciclo che chiede con delle scanf gli interi all'utente
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &C[i]);
    }
    // aggiungi qui il ciclo che stampa gli elementi del vettore con le printf
    for (i = 0; i < 10; i++)
    {
        printf("L'elemento %d del vettore C contiene %d \n", i, C[i]);
    }
}