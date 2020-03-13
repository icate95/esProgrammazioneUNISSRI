// bisestile.c
/* Dato un anno n stabilisce se e' bisestile
Regole: un anno è bisestile se e' divisibile per quattro tranne quelli secolari che
non sono multipli di 400 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    long anno;
    printf("\nCalcolo degli anni bisestili secondo il calendrio Gregoriano");
    printf("\nInserire anno :");
    scanf("%ld", &anno);
    if ((anno % 4) != 0)
        printf("\nL'anno %ld NON e' bisestile! (Non divisibile per 4)\n", anno);
    else
    {
        if ((anno % 100) != 0)
            printf("\nL'anno %ld e' bisestile! (Divisibile per 4 e non secolare)\n", anno);
        else
        {
            if ((anno % 400) != 0)
                printf("\nL'anno %ld NON e' bisestile! (Divisibile per 4, secolare e non divisibile per 400)\n", anno);
            else
                printf("\nL'anno %ld e' bisestile! (Divisibile per 4, secolare e multiplo di 400)\n", anno);
        }
    }
    // printf("\n\n\n\nPremi un carattere e premi enter per chiudere questa finestra");
    // scanf("%d", &anno); // solo per non far scomparirie la finestra ....
    // getch();
    exit(0);
}