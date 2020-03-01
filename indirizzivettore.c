//indirizzi_Vettore.c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, x[100];
    for (i = 0; i < 100; i++)
    {
        x[i] = i + 1; // riempiamo il vettore
    }
    printf("Il valore di x e' %d\n", x);
    printf("Il valore di x[0] e' %d\n", x[0]);
    printf("L'indirizzo di x[0] e' %d\n", &x[0]);
    printf("Il valore di x[99] e' %d\n", x[99]);
    printf("L'indirizzo di x[99] e' %d\n", &x[99]);
    printf("La memoria occupata dal vettore e' %ld\n", (void *)&x[99] + sizeof(int) - (void *)&x[0]);

    return 0;
}