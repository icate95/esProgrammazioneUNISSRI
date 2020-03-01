//puntatori.c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n1, n2;

    float *fp;
    fp = &n1;
    printf("Il valore di *fp e' --> %f \n", *fp);
    n2 = *fp;
    printf("Il valore di n2 e' --> %f \n", n2);
    printf("L'indirizzo di n1 e' --> %p \n", &n1);
    printf("L'indirizzo memorizzato in fp e' --> %p \n", fp);

    return 0;
}