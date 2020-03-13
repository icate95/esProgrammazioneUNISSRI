// massimoFunzionale1.c
// ESERCIZIO: controllare il codice: sono presenti due errori
// uno e' algoritmico, l'altro riguarda la composizione della FUNZIONE
#include <stdio.h>
#include <stdlib.h>
#define LUN 3
int main()
{
    int num; // dichiarazione delle variabili
    int i;
    int massimo;
    int numeri[LUN];
    int calcolaMassimo(int numeri[]); // dichiarazione della funzione
    // solita immissione di un array
    for (i = 0; i < LUN; i = i + 1)
    {
        scanf("%d", &num);
        numeri[i] = num;
    }
    massimo = calcolaMassimo(numeri);
    // perche' non funziona? cosa manca nella funzione ??
    printf("massimo=%d\n", massimo);
    getchar(); // non serve a nulla ma ferma la finestra...
    exit(0);
}
int calcolaMassimo(int numeri[])
{
    int massimo;
    int i; // vedo solo le varibili che vengono passate
    //e quelle dichiarate
    // quindi vedo e uso "massimo" e "i"
    // e l'indirizzo di dove inizia "numeri"
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