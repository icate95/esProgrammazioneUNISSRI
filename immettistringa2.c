// stampavettore.c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // char s[40];
    char s[] = "esercitazione";
    // printf("inserisci una strina (max 40 char): \n");
    // scanf("%s", &s);
    int i;

    // printf("Ecco la stinga immessa: %s", s);
    while (s[i] != '\0')
    {
        printf("%c \n", s[i]);
        i++;
    }

    // inverti la stringa

    char c;
    int lunghezza;
    /* qua va inserita la parte di codice che legge la stringa */
    lunghezza = strlen(s);
    /* ecco il pezzo che probabilmente ti ha fatto pensare parecchio*/
    for (i = 0; i < lunghezza / 2; i++)
    {
        c = s[lunghezza - i - 1];
        s[lunghezza - i - 1] = s[i];
        s[i] = c;
    }
    printf(" \n %s <-----parola invertita\n ", s);
    getchar();
}