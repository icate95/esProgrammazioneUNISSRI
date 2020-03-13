//gestioneMissItalia.c
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char nome[256];
    char cognome[256];
    int voto[3]; // voto[0] e' il voto della giuria (da 0 a 100),
    // voto[1] quello della giuria speciale e voto[2] il voto
    // telefonico.
    int altezza;
    int peso;
    int cucina;                      // 0= aiuto!!! 10= apre un ristorante
} MissItalia;                        // Iniziale maiuscola
void inserisci_miss(MissItalia *p1); // stampa i dati
void aggiusta_voto(MissItalia *p1);  // rende il voto perfetto (100, 100, 100)!!
void stampa_miss(MissItalia *p1);    // stampa i dati
int main()
{
    MissItalia ragazza1;
    MissItalia *p1;
    MissItalia ragazza2;
    MissItalia *p2;
    // sistemo i puntatori
    p1 = &ragazza1;
    p2 = &ragazza2;
    inserisci_miss(p1); // i dati finiscono in ragazza1
    inserisci_miss(p2); // i dati finiscono in ragazza2
    aggiusta_voto(p1);
    aggiusta_voto(p2);
    stampa_miss(p1);
    stampa_miss(p2);
    fflush(stdin);
    getchar();
    exit(0);
}
void inserisci_miss(MissItalia *p1)
{
    char nome[256];
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
}
void stampa_miss(MissItalia *p1)
{
    printf("\n\n\n------------****------------\n");
    printf("Nome:%s Cognome:%s \n", p1->nome, p1->cognome);
    printf("altezza:%d Peso:%d \n", p1->altezza, p1->peso);
    printf("voto: %d %d %d \n", p1->voto[0], p1->voto[1], p1->voto[2]);
    printf("cucina [0=aiuto .. 10=professionista] = %d \n", p1->cucina);
}
void aggiusta_voto(MissItalia *p1)
{
    p1->voto[0] = 100;
    p1->voto[1] = 100;
    p1->voto[2] = 100;
    printf("voto aggiustato\n");
}