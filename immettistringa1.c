// stampavettore.c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s[40];

    printf("inserisci una strina (max 40 char): \n");
    scanf("%s", &s);

    printf("Ecco la stinga immessa: %s", s);
}