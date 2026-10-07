#include <stdio.h>

int main() {
    int n, inv = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    while (n > 0) {
        inv = inv * 10 + n % 10;
        n /= 10;
    }

    printf("Número invertido: %d\n", inv);

    return 0;
}