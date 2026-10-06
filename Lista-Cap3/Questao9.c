#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor, soma = 0, media;
    int cont = 0;

    printf("Digite um valor (negativo para sair): ");
    scanf("%f", &valor);

    while (valor >= 0) {
        soma += valor;
        cont++;

        printf("Digite um valor (negativo para sair): ");
        scanf("%f", &valor);
    }

    if (cont > 0) {
        media = soma / cont;
        printf("Quantidade de valores: %d\n", cont);
        printf("Soma total: %.2f\n", soma);
        printf("Média: %.2f\n", media);
    } else {
        printf("Nenhum valor válido foi digitado.\n");
    }
    system("PAUSE");
    return 0;
}