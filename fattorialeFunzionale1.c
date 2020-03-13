// fattorialeFunzionale1.c
#include <stdio.h>
double calcola_fattoriale(int n);
int main()
{
    int n;
    double fatt;

    /* input dell'intero */
    printf("intero---->");
    scanf("%d", &n);
    /* calcolo del fattoriale */
    fatt = calcola_fattoriale(n);
    /* visualizzazione risultato */
    printf("\n Il fattoriale di %d e' l'intero %g\n", n, fatt);
    getchar();
}
double calcola_fattoriale(int n)
// Il calcola del fattoriale è racchiuso in questa funzione
{
    double i, fatt = 1;
    for (i = 1; i <= n; i++)
    {
        fatt = fatt * i;
    }
    return (fatt); // ritorna il valore calcolato
}