#include <stdio.h>
#include <stdlib.h>
#define NOME_FILE "file/soldati.txt"
main()
{
    FILE *file_in;
    unsigned long numero_caratteri;
    file_in = fopen(NOME_FILE, "rt");
    if (file_in == NULL)
    {
        printf("Non trovo il file.\n");
        exit(-1);
    }
    numero_caratteri = 0;
    while (fgetc(file_in) != EOF)
        numero_caratteri++;
    printf("[testo]: Il file e' composto da %u caratteri\n", numero_caratteri);
    fclose(file_in);
    // riapriamo il file in modalita’ binaria
    // e rifacciamo le stesse operazioni
    file_in = fopen(NOME_FILE, "rb");
    if (file_in == NULL)
    {
        printf("Non trovo il file.\n");
        exit(-1);
    }
    numero_caratteri = 0;
    while (fgetc(file_in) != EOF)
        numero_caratteri++;
    printf("[binaria]: Il file e' composto da %u caratteri\n", numero_caratteri);
    fclose(file_in);
}