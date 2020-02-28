#include <stdio.h>
#include <stdlib.h>
//Capitalizzazione Trimestrale fatta con float
// IL PROGRAMMA E' VOLUTAMENTE BACATO (4 errori....)
// ATTENZIONE GLI ERRORI DEL COMPILATORE SUCCESSIVI
// AL PRIMO POTREBBERO INGANNARVI....
// METTETE A POSTO IL CODICE PARTENDO DALL'INIZIO
int main()
{
    float contoIniziale;
    float conto;
    float interesse;
    int i; //l'indice per i nostri cicli for
    printf("\nValore del conto all'inizio dell'anno:\n");
    scanf("%f", &contoIniziale);
    conto = contoIniziale;
    printf("\nInserire l'interesse della banca annuale\n");
    scanf("%f", &interesse);
    //  riga da eliminare ~ conto = contoIniziale * (1 + interesse / 100);
    /******** capitalizzazione trimestrale **********/
    conto = contoIniziale;
    for (i = 1; i < 5; i++)
    {
        // abbasso il tasso di interesse al quello trimestrale
        conto = conto * (1 + interesse / 100 * 3 / 12);
    }
    printf("\n Valore del conto all'FINE dell'anno (CAP. TRIMESTRALE): %6.2f \n", conto);
    printf("\n********************************************\n\n");
    getchar();
    return 0;
}