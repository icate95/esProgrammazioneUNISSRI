//puntastori 2.c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, a[5];

    int *pa;

    pa = &a[0];

    for (i = 0; i < 5; i++)
    {
        a[i] = i + 1; // riempiamo il vettore
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
        printf("Elemento --> %d\n", a[i]);
        printf("Elemento --> %d\n", *(pa + i));
    }

    return 0;
}