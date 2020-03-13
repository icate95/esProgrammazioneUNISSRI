// massimoFunzionale3.c
// ESERCIZIO: passaggio parametri per indirizzo
// Una procedura puo' cambiare delle celle FUORI da essa
// se gli si passa l'INDIRIZZO DELLA VARIABILE
#include <stdio.h>
#include <stdlib.h>
#define LUN 3
int main()
{
    int num; // dichiarazione delle variabili
    int i;
    int massimo;
    int numeri[LUN];
    void calcolaMassimo(int numeri[], int *DammiIndirizzoDelMassimo);
    // Questa e' una PROCEDURA !!!
    // solita immissione di un array
    for (i = 0; i < LUN; i = i + 1)
    {
        scanf("%d", &num);
        numeri[i] = num;
    }
    printf("**** punto A **** \n");

    printf("%d\n", numeri);
    printf("%d\n", massimo);
    printf("%d\n", &massimo);

    calcolaMassimo(numeri, &massimo);
    printf("massimo=%d\n", massimo);
    getchar(); // non serve a nulla ma ferma la finestra...
    exit(0);
}
void calcolaMassimo(int numeri[], int *DammiIndirizzoDelMassimo)
{
    int massimoLocale;
    int i; // vedo solo le variabili che vengono passate
    //e quelle dichiarate
    // quindi vedo e uso "massimoLocale" e "i"
    // l'indirizzo dove inizia l'array "numeri" passato
    //
    printf("**** punto B **** \n");
    printf("%d\n", numeri);
    printf("%d\n", DammiIndirizzoDelMassimo);
    printf("%d\n", *DammiIndirizzoDelMassimo);
    printf("%d\n", &DammiIndirizzoDelMassimo);
    massimoLocale = numeri[0];
    for (i = 0; i < LUN; i = i + 1)
    {
        if (massimoLocale < numeri[i])
        {
            massimoLocale = numeri[i];
        }
    }
    *DammiIndirizzoDelMassimo = massimoLocale;
    // il valore della variabile LOCALE "massimoLocale" (che andrebbe persa
    // due righe sotto, alla chiusura della procedura) viene
    // copiato nella cella di indirizzo "DammiIndirizzoDelMassimo".
    // "DammiIndirizzoDelMassimo" contiene infatti l'indirizzo (esterno
    // alla memoria che puo' vedere la procedura) della variabile massimo
    // infatti chiamammo nel main: "calcolaMassimo(numeri, &massimo);"
}
