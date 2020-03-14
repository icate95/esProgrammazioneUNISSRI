#include <stdio.h>
#include <stdlib.h>
#define LUN 10
void stampaAlbero();
void stampaRamo(int, int);
void stampaSpazio();
void stampaStella();
int main()
{
    stampaAlbero();
    getchar();
    exit(0);
}
void stampaAlbero()
{

    int i;
    for (i = 0; i <= LUN; i++)
    {
        stampaRamo(i, LUN);

        // printf("%d", i);
    }
    // printf("%d", LUN);
}
void stampaRamo(int num, int max)
{
    int i, j;
    int val = max - num;
    for (j = 0; j < val; j++)
    {
        stampaSpazio();
        // printf("asd");
    }
    for (j = 0; j < (num + num - 1); j++)
    {
        stampaStella();
    }
    printf("\n");
}
void stampaSpazio()
{
    char spazio[2] = " ";
    printf("%s", spazio);
}
void stampaStella()
{
    char stella[2] = "*";
    printf("%s", stella);
}