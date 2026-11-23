#include <stdio.h>
#include <stdlib.h>

long potencia(int base, int expoente);

int main() {
    int base, expoente;

    printf("Digite a base e o expoente (inteiro não negativo): ");
    scanf("%d %d", &base, &expoente);

    if (expoente < 0) {
        printf("Erro: o expoente não pode ser negativo!\n");
        return 1;
    }

    printf("%d elevado a %d = %ld\n", base, expoente, potencia(base, expoente));

    return 0;
}

long potencia(int base, int expoente) {
    // caso base: qualquer número elevado a 0 é 1
    if (expoente == 0) {
        return 1;
    }

    // passo recursivo: base^expoente = base * base^(expoente - 1)
    return (long)base * potencia(base, expoente - 1);
}