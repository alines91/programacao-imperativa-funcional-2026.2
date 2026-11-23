#include <stdio.h>
#include <stdlib.h>

int somaDigitos(int n);

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro: o número deve ser positivo!\n");
        return 1;
    }

    printf("Soma dos dígitos de %d: %d\n", numero, somaDigitos(numero));

    return 0;
}

int somaDigitos(int n) {
    // caso base: quando não sobra nenhum dígito (n == 0), a soma é 0
    if (n == 0) {
        return 0;
    }

    // passo recursivo: último dígito (n % 10) + soma dos dígitos do resto (n / 10)
    return (n % 10) + somaDigitos(n / 10);
}