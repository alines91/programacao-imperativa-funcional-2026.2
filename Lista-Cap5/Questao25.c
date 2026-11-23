#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main() {
    int a, b;

    printf("Digite dois inteiros positivos: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Erro: os números devem ser positivos!\n");
        return 1;
    }

    printf("MDC de %d e %d: %d\n", a, b, mdc(a, b));

    printf("Fração %d/%d simplificada: ", a, b);
    simplifica(a, b);

    return 0;
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }

    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int divisor = mdc(num, den);

    printf("%d/%d\n", num / divisor, den / divisor);
}