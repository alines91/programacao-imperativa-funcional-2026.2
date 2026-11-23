#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int n);

int main() {
    int numero, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (ehPrimo(numero) == 1) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    printf("Primos de 1 até 50: ");
    for (i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

int ehPrimo(int n) {
    int i;

    if (n < 2) {
        return 0;
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}