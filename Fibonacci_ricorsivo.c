// Fibonacci_ricorsivo.c
#include <stdio.h>
#include <stdlib.h>
// aggiungi prototipo
int Fib(int numero);
int main()
{
    int numero;
    printf("Immetti un numero maggiore o uguale a 0: ");
    scanf("%d", &numero);
    printf("F(%d) = %d\n", numero, Fib(numero));
    getchar();
    return 0;
}
// inserisci qui la funzione ricorsiva
int Fib(int numero)
{
    int risultato;

    // F(n) = F(n - 1) + F(n - 2).Vale inoltre F(1) = 1 e F(0) = 0.
    if (numero < 0)
        risultato = -1;
    else if (numero == 0)
        risultato = 0;
    else if (numero == 1)
        risultato = 1;
    else
        risultato = Fib(numero - 1) + Fib(numero - 2);

    return risultato;
}