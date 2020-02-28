// inizializzaMatrice1.c
#include <stdio.h>
#include <stdlib.h>
#define N 8

int main()
{
    int A1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int A2[2][3] = {1, 2, 3, 4, 5, 6};
    int A3[2][3] = {{1, 2}, {4}};

    int i, j;

    int B[N][N];
    printf("\n");
    printf("Matrice A1: \n");
    // aggiungi qui il ciclo che stampa A1
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", A1[i][j]);
        }
        printf("\n");
    }
    printf("\n* * *\n\n");
    printf("Matrice A2: \n");

    // aggiungi qui il ciclo che stampa A2
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", A2[i][j]);
        }
        printf("\n");
    }
    printf("\n* * *\n\n");
    // aggiungi qui il ciclo che stampa A3
    printf("Matrice A3: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", A3[i][j]);
        }
        printf("\n");
    }

    printf("\n********************************************\n\n");
    printf("Matrice %d x %d : \n", N, N);

    // esercizio 2
    // stampare una matrice n x n  tutta di 0
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            B[i][j] = 0;
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}