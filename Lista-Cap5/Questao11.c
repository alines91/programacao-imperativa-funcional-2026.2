#include <stdio.h>
#include <stdlib.h>

int ehPar(int n);

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (ehPar(numero) == 1) {
        printf("O número %d é PAR.\n", numero);
    } else {
        printf("O número %d é ÍMPAR.\n", numero);
    }

    return 0;
}

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}