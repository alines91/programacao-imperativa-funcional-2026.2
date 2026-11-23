#include <stdio.h>
#include <stdlib.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o número deve ser positivo!\n");
        return 1;
    }

    printf("--- Contagem regressiva ---\n");
    contagem(n);

    printf("--- Contagem crescente ---\n");
    contagemCrescente(n);

    return 0;
}

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }

    // aqui o printf vem ANTES da chamada recursiva:
    // imprime n e só depois chama contagem(n - 1), então sai n, n-1, ..., 1
    printf("%d\n", n);
    contagem(n - 1);
}

void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }

    // aqui a chamada recursiva vem ANTES do printf:
    // a função desce até n = 0 sem imprimir nada e o printf só roda na volta,
    // então o primeiro a imprimir é o 1, depois o 2, e assim até chegar em n
    contagemCrescente(n - 1);
    printf("%d\n", n);
}