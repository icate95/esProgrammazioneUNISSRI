//puntastori 2.c
#include <stdio.h>
#include <stdlib.h>
struct data
{
    int giorno;
    int mese;
    int anno;
};

int main()
{
    typedef struct data Data;
    Data oggi;
    oggi.giorno = 14;

    oggi.anno = 1995;

    oggi.mese = 3;

    printf("%d %d %d \n", oggi.giorno, oggi.mese, oggi.anno);

    // con puntatore

    Data *pd; // puntatore a data
    pd = &oggi;

    pd->giorno = 3;
    pd->anno = 2020;
    pd->mese = 3;
    printf("%d %d %d \n", oggi.giorno, oggi.mese, oggi.anno);

    return 0;
}