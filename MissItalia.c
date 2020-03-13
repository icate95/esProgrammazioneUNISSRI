// MissItalia.c
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char nome[256];
    char cognome[256];
    int voto[3]; // voto[0] e' il voto della giuria (da 0 a 100), voto[1] quello della giuria speciale e voto[2] il voto telefonico.
    int altezza;
    int peso;
    int cucina; // 0= aiuto!!! 10= apre un ristorante
} MissItalia;   // Iniziale maiuscola
int main()
{

    MissItalia gruppo[200]; //  gruppo di 200 miss

    MissItalia ragazza0;
    strcpy(ragazza0.nome, "Filberta");
    ragazza0.altezza = 180;
    ragazza0.voto[0] = 90;
    ragazza0.voto[1] = 90;
    ragazza0.voto[2] = 90;

    int votoTotale = ragazza0.voto[0] + ragazza0.voto[1] + ragazza0.voto[2];
    printf("nome= %s, altezza= %d \n voto totale = %d\n\n", ragazza0.nome, ragazza0.altezza, votoTotale);

    int i;
    MissItalia ragazza1;
    MissItalia *p1;
    MissItalia ragazza2;
    MissItalia *p2;
    p1 = &ragazza1;
    p2 = &ragazza2;
    // inseriamo la prima ragazza
    printf("Dammi il nome -->");
    scanf("%s", p1->nome);
    printf("Dammi il cognome -->");
    scanf("%s", p1->cognome);
    p1->altezza = 180;
    p1->voto[0] = 80;
    p1->voto[1] = 90;
    p1->voto[2] = 99;
    p1->peso = 78;
    p1->cucina = 0; // aiuto!!!
    // inseriamo la seconda ragazza
    printf("Dammi il nome -->");
    scanf("%s", p2->nome);
    printf("Dammi il cognome -->");
    scanf("%s", p2->cognome);
    p2->altezza = 180;
    p2->voto[0] = 85;
    p2->voto[1] = 85;
    p2->voto[2] = 90;
    p2->peso = 88;
    p2->cucina = 10; // meglio...
    // stampo i dati immessi
    printf("\n\n\n------------****------------\n");
    printf("Nome:%s Cognome:%s \n", p1->nome, p1->cognome);
    printf("altezza:%d Peso:%d \n", p1->altezza, p1->peso);
    printf("voto: %d %d %d \n", p1->voto[0], p1->voto[1], p1->voto[2]);
    printf("cucina [0=aiuto .. 10=professionista] = %d \n", p1->cucina);
    // stampo i dati immessi
    printf("\n\n\n------------****------------\n");
    printf("Nome:%s Cognome:%s \n", p2->nome, p2->cognome);
    printf("altezza:%d Peso:%d \n", p2->altezza, p2->peso);
    printf("voto: %d %d %d \n", p2->voto[0], p2->voto[1], p2->voto[2]);
    printf("cucina [0=aiuto .. 10=professionista] = %d \n", p2->cucina);

    // inserire qui il codice della comparazione
    // scrivere il codice che mostra le differenze di punteggio fra le due concorrenti i cui dati sono stati immessi
    printf(" C O M P A R A Z I O N E\n");
    printf("------------****------------\n");
    printf("Altezza:\n");
    printf("\t%s %s:\t%d\n", p1->nome, p1->cognome, p1->altezza);
    printf("\t%s %s:\t%d\n", p2->nome, p2->cognome, p2->altezza);
    printf("Peso:\n");
    printf("\t%s %s:\t%d\n", p1->nome, p1->cognome, p1->peso);
    printf("\t%s %s:\t%d\n", p2->nome, p2->cognome, p2->peso);
    printf("Voto:\n");
    printf("\t%s %s:\t%d\t%d\t%d\n", p1->nome, p1->cognome, p1->voto[0], p1->voto[1], p1->voto[2]);
    printf("\t%s %s:\t%d\t%d\t%d\n", p2->nome, p2->cognome, p2->voto[0], p2->voto[1], p2->voto[2]);
    printf("Cucina [0=aiuto .. 10=professionista]:\n");
    printf("\t%s %s:\t%d\n", p1->nome, p1->cognome, p1->cucina);
    printf("\t%s %s:\t%d\n", p2->nome, p2->cognome, p2->cucina);
}