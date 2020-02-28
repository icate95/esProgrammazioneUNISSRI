#include <stdio.h>
#include <stdlib.h>
//Capitalizzazione fatta con float
// void main() non verra' piu' impiegato nelle prossime versioni del codice,
// useremo "int main()"
// e, prima della graffa finale del main, exit(0).
// In questo modo il main diventa una funzione che ritorna 0
// tramite l'istruzione exit(0) al sistema operativo
int main()
{
    float contoIniziale;
    float conto;
    float interesse;
    int i; //l'indice per i nostri cicli for
    printf("\n********************************************");
    printf("\n* Capitalizzazione del mio conto corrente *\n");
    printf("\n********************************************\n");
    //Stampo le istruzioni per l'utente
    printf("\nValore del conto all'inizio dell'anno:\n");
    scanf("%f", &contoIniziale);
    conto = contoIniziale; // INIZIALIZZO LA VARIABILE
    // dopo prova a togliere questa riga e vedi cosa succede a non inizializzare
    // le variabili.....
    printf("\nInserire l'interesse della banca annuale\n");
    scanf("%f", &interesse);
    // se lascio due buchi nella stringa di controllo " bla bla %d bla %d "
    // posso copiare per valore due variabili
    printf("conto: %6.2f, interesse ANNUALE : %6.2f \n", conto, interesse);
    //calcolo il risultato in capitalizzazione annua
    conto = contoIniziale * (1 + interesse / 100);
    // adesso non ho problemi, sono tutti float!!
    printf("\n Valore del conto alla FINE dell'anno (CAP. ANNUA): %6.2f \n", conto);
    // posso far vere solo le cifre prima e dopo la virgola che voglio io...
    // facciamo vedere 6 cifre di cui due dopo il punto per i centesimi
    // usando %6.2f SEMPLICE !!!
    /******** capitalizzazione trimestrale **********/
    conto = contoIniziale;
    // Osservazione : senza la riga sopra il codice non era corretto
    // perche' in conto avevamo gia' il conto capitalizzato NON L'INIZIALE
    for (i = 1; i < 5; i = i + 1)
    {
        conto = conto * (1 + interesse / 100 * 3 / 12);
        // abbasso il tasso di interesse al quello trimestrale
    }
    printf("\n Valore del conto alla FINE dell'anno (CAP. TRIMESTRALE): %6.2f \n", conto);
    /******** capitalizzazione quotidiana (Tipico Conto On-line) **********/
    conto = contoIniziale;
    for (i = 1; i < 366; i = i + 1)
    {
        conto = conto * (1 + interesse / 100 * 1 / 365);
        // abbasso il tasso di interesse a quello quotidiano
    }
    printf("\n Valore del conto alla FINE dell'anno (CAP. QUOTIDIANA): %6.2f \n", conto);
    printf("\n********************************************\n\n");
    getchar();
    return 0;
}