#include <stdio.h>

int main() {
    int n, i, divisores = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    if (n > 1 && divisores == 2) {
        printf("%d e primo.\n", n);
    } else {
        printf("%d não é primo (%d divisores).\n", n, divisores);
    }

    return 0;
}