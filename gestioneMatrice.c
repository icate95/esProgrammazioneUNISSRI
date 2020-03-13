// gestioneMatrice.c
#include <stdio.h>
#include <stdlib.h>
#define N_MAX 9
void riempi_Matrice(int a[][N_MAX]);
void stampa_Matrice(int a[][N_MAX]);
int main()
{
    int a[N_MAX][N_MAX];
    riempi_Matrice(a);
    stampa_Matrice(a);
    getchar();
    exit(0);
}
// aggiungi le definizioni di funzioni che mancano
void riempi_Matrice(int a[][N_MAX])
{
    int i, j;
    printf("inserire %d elementi: \n", N_MAX);
    for (i = 0; i < N_MAX; i++)
    {
        for (j = 0; j < N_MAX; j++)
        {
            a[j][i] = j + i;
            // scanf("%d", &a[j][i]);
        }
    }
}
void stampa_Matrice(int a[][N_MAX])
{
    int i, j;
    for (i = 0; i < N_MAX; i++)
    {
        for (j = 0; j < N_MAX - 1; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}
