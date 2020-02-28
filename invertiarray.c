//potenze.c
#include <stdio.h>
#include <stdlib.h>
#define N 5

//  link d'aiuto
// https://www.programmingsimplified.com/c-program-reverse-array

int main()
{
    // 1. dichiara un array A di 5 elementi;
    int A[N];
    int B[N];
    int i;
    int temp;
    int end = N - 1;

    // 2. cshiede all'utente 5 valori interi e li memorizza nell'array A;
    printf("inserire %d elementi: \n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // 3. stampa l'array A;
    // aggiungi qui il ciclo che stampa gli elementi del vettore con le printf
    for (i = 0; i < N; i++)
    {
        printf("elementi inseriti -- %d : %d \n", i, A[i]);
    }

    // 4. inverte gli elementi dell'array A;
    for (i = 0; i < N; i++)
    {
        B[end - i] = A[i];
    }

    // 5. stampa a monitor l'array A.
    for (i = 0; i < N; i++)
    {
        printf("Array invertito --  %d : %d \n", i, B[i]);
    }
}