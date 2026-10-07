#include <stdio.h>

int main() {
    int a, b, n, i, divisores, soma = 0, cont = 0;

    do {
        printf("Digite A e B (positivos, com A < B): ");
        scanf("%d %d", &a, &b);
    } while (a <= 0 || b <= 0 || a >= b);

    printf("Primos entre %d e %d:\n", a, b);

    for (n = a; n <= b; n++) {
        divisores = 0;
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                divisores++;
            }
        }
        if (n > 1 && divisores == 2) {
            printf("%d ", n);
            soma += n;
            cont++;
        }
    }
    printf("\n");

    if (cont > 0) {
        printf("Soma dos primos: %d\n", soma);
    } else {
        printf("Não há primos nesse intervalo.\n");
    }

    return 0;
}