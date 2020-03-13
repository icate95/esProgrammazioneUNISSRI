// concatena2stringhe_bis.c
#include <stdio.h>
#include <stdio.h>
#include <string.h>
// inserisci qui il prototipo
void unisci2stringhe(char *stringa1, char *stringa2, char *stringaUnita);
int main()
{
    char stringa1[128];
    char stringa2[128];
    char stringaUnita[128];
    // il carattere '\n' semplicemente manda a capo
    printf("Immettere la prima stringa\n");
    scanf("%s", stringa1);
    printf("Immettere la seconda stringa\n");
    scanf("%s", stringa2);
    unisci2stringhe(stringa1, stringa2, stringaUnita);
    printf(" %s + %s = %s ", stringa1, stringa2, stringaUnita);
    getchar();
    exit(0);
}
// inserisci qui la definizione della funzione
void unisci2stringhe(char *stringa1, char *stringa2, char *stringaUnita)
{
    int i, lung1, lung2;
    // inizio a copiare la prima stringa sul stringaUnita per indirizzo
    lung1 = strlen(stringa1); // misuro la lunghezza della stringa
    for (i = 0; i < lung1; i++)
    {
        stringaUnita[i] = stringa1[i]; // copia per indirizzo
    }
    lung2 = strlen(stringa2); // misuro la lunghezza della seconda stringa
    for (i = lung1; i < lung2 + lung1; i++)
    {
        stringaUnita[i] = stringa2[i - lung1];
        // ATT !!! proseguo con una stringaUnita e ricomincio dall'inizio con stringa2
    }
    stringaUnita[i] = '\0'; // terminatore di stringaUnita
}