#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    printf("Digite os três ângulos internos do triângulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180) {
        printf("Erro: os ângulos fornecidos não formam um triângulo válido!\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Triângulo Retângulo\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Triângulo Obtusângulo\n");
    } else {
        printf("Triângulo Acutângulo\n");
    }

    return 0;
}