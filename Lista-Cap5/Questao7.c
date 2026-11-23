#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b);

int main() {
    int x, y, resultado;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &x, &y);

    resultado = soma(x, y);

    printf("Soma: %d\n", resultado);

    return 0;
}

int soma(int a, int b) {
    return a + b;
}