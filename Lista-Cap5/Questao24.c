#include <stdio.h>
#include <stdlib.h>

// #define DEBUG

int somaAteN(int n);

int main() {
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    printf("Soma de 1 até %d: %d\n", n, somaAteN(n));

    return 0;
}

int somaAteN(int n) {
    int i, soma = 0;

    for (i = 1; i <= n; i++) {
        soma += i;

#ifdef DEBUG
        printf("[DEBUG] i = %d, soma parcial = %d\n", i, soma);
#endif
    }

    return soma;
}

// Diferença de comportamento:
// - Compilando SEM DEBUG (gcc questao24.c -o questao24): o pré-processador descarta
//   o printf do #ifdef, e o programa só mostra o resultado final.
// - Compilando COM DEBUG (tirando as barras do #define DEBUG lá em cima, ou usando
//   gcc -DDEBUG questao24.c -o questao24): o printf entra no código e, a cada volta
//   do laço, aparece o valor parcial da soma, além do resultado final.