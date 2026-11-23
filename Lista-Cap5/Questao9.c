#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b);

int main() {
    int x, y;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &x, &y);

    printf("O maior é: %d\n", maior(x, y));

    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}