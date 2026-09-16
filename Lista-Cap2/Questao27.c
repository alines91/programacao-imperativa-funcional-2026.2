#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    /* srand() "semeia" o gerador de numeros aleatorios com um valor
    diferente a cada execucao (usando o tempo atual do sistema).
    sem isso, rand() sempre geraria a mesma sequencia toda vez que
    o programa rodasse */

    srand(time(NULL));

    int dado1 = rand() % 6 + 1;
    int dado2 = rand() % 6 + 1;
    int dado3 = rand() % 6 + 1;

    printf("Dado 1: %d\n", dado1);
    printf("Dado 2: %d\n", dado2);
    printf("Dado 3: %d\n", dado3);

    return 0;
}