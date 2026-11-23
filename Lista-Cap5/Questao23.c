#include <stdio.h>
#include <stdlib.h>

#define DOBRO(x) x*2

int dobro(int x);

int main() {
    printf("Macro DOBRO(2+3): %d\n", DOBRO(2+3));
    printf("Função dobro(2+3): %d\n", dobro(2+3));

    // Por que são diferentes:
    // a macro é só substituição de texto, então DOBRO(2+3) vira 2+3*2.
    // Como * tem precedência sobre +, fica 2 + 6 = 8.
    // Já a função recebe o argumento JÁ calculado (2+3 = 5), então devolve 5*2 = 10.

#undef DOBRO
#define DOBRO(x) ((x) * 2)

    printf("Macro corrigida DOBRO(2+3): %d\n", DOBRO(2+3));

    return 0;
}

int dobro(int x) {
    return x * 2;
}