#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número é PAR\n");
    } else {
        printf("O número é ÍMPAR\n");
    }

    // b) sinal
    if (numero > 0) {
        printf("O número é POSITIVO\n");
    } else if (numero < 0) {
        printf("O número é NEGATIVO\n");
    } else {
        printf("O número é ZERO\n");
    }

    return 0;
}