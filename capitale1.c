#include <stdio.h>
#include <stdlib.h>
int main()
{
    int conto;
    int interesse;
    // il carattere '\n' semplicemente manda a capo
    printf("\n********************************************");
    printf("\n* Capitalizzazione del mio conto corrente\n");
    printf("\n********************************************\n");
    //Stampo le istruzioni per l'utente
    printf("\nValore del conto all'inizio dell'anno:\n");
    scanf("%d", &conto);
    printf("\nInserire l'interesse della banca annuale\n");
    scanf("%d", &interesse);
    // calcolo il risultato in capitalizzazione annua
    conto = conto * (1 + (float)interesse / 100);
    // Stampo il risultato passando del "segnaposto per interi" %d
    // il VALORE della variabile conto
    printf("\nFLOAT ~ Valore del conto alla FINE dell'anno (CAP. ANNUA): %f \n", conto);
    printf("\n********************************************\n\n");
    // Discussione sul tipo di dato.
    // Ci chiediamo infatti, ma un coefficiente (tipo 0.01) puo' essere
    // rappresentato come un intero (1,2,312, ....) ??
    // Ovviamente no allora FORZO il rapporto di interi venga visto come
    // un numero che possa essere frazionario (il tipo float)
    // conto = conto * (1 + interesse/100 ); diventa
    // conto = conto * (1 + (float) interesse/100 );
    printf("\nSe invece il coeffic.\n(1 + interesse/100 )\n lo uso come un float (doppia precisione)..)\n");
    conto = conto * (1 + (float)interesse / 100);
    // Stampo il risultato passando del "segnaposto per interi" %d
    // il VALORE della variabile conto
    printf("\nINT ~ Valore del conto alla FINE dell'anno (CAP. ANNUA): %d \n", conto);
    printf("\nValore del conto alla FINE dell'anno (CAP. ANNUA): %d \n", interesse);
    printf("\n********************************************\n\n");
    getchar();
    return 0;
}