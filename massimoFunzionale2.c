// massimoFunzionale1.c
// ESERCIZIO: chiudere la parte necessaria del codice che calcola il massimo
// in una funzione calcolaMassimo(...) ed chiamarla nel main
#include <stdio.h>
#include <stdlib.h>
#define LUN 10
int calcolaMassimo(int numeri[]);
int calcoloMinimo(int numeri[]);
int main()
{
    int num;
    int i;
    int massimo, minimo;
    int numeri[LUN];
    // solita immissione di un array
    for (i = 0; i < LUN; i = i + 1)
    {
        scanf("%d", &num);
        numeri[i] = num;
    }

    massimo = calcolaMassimo(numeri);
    minimo = calcoloMinimo(numeri);

    printf("massimo=%d\n", massimo);
    printf("minimo=%d\n", minimo);
    getchar(); // non serve a nulla ma ferma la finestra...
    exit(0);
}

int calcolaMassimo(int numeri[LUN])
{
    int massimo;
    int i;

    massimo = numeri[0];
    for (i = 0; i < LUN; i = i + 1)
    {
        if (numeri[i] > massimo)
        {
            massimo = numeri[i];
        }
    }
    return massimo;
}
int calcoloMinimo(int numeri[LUN])
{
    int massimo;
    int i;

    massimo = numeri[0];
    for (i = 0; i < LUN; i = i + 1)
    {
        if (numeri[i] < massimo)
        {
            massimo = numeri[i];
        }
    }
    return massimo;
}