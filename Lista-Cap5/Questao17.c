#include <stdio.h>
#include <stdlib.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int n;
    long iterativo, recursivo;

    printf("Digite um inteiro não negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: o número não pode ser negativo!\n");
        return 1;
    }

    if (n > 20) {
        printf("Erro: o fatorial de %d é grande demais para um long (use até 20).\n", n);
        return 1;
    }

    iterativo = fatorialIterativo(n);
    recursivo = fatorialRecursivo(n);

    printf("Fatorial iterativo: %ld\n", iterativo);
    printf("Fatorial recursivo: %ld\n", recursivo);

    if (iterativo == recursivo) {
        printf("Os resultados coincidem.\n");
    } else {
        printf("Os resultados são diferentes!\n");
    }

    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    int i;

    for (i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }
    return (long)n * fatorialRecursivo(n - 1);
}