// scriviconsole.c scrive in un file
// tutto quello che viene digitato da console
#include <stdio.h>
#include <stdlib.h>
#define NOME_FILE "file/console.txt"
int main()
{
    FILE *file_out;
    char c;
    file_out = fopen(NOME_FILE, "w");
    if (file_out == NULL)
    {
        printf("Non trovo il file.\n");
        exit(-1);
    }
    printf("(Per terminare premi @)\n\n");
    c = getchar();
    while (c != '@')
    {
        fputc(c, file_out);
        c = getchar();
    }
    fclose(file_out);
}