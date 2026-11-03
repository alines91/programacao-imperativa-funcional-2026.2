#include <stdio.h>
#include <stdlib.h>

int main() {
    float lab, semestral, final;

    printf("Digite a nota do Trabalho de Laboratório (peso 2): ");
    scanf("%f", &lab);
    printf("Digite a nota da Avaliação Semestral (peso 3): ");
    scanf("%f", &semestral);
    printf("Digite a nota do Exame Final (peso 5): ");
    scanf("%f", &final);

    float media = (lab * 2 + semestral * 3 + final * 5) / 10.0f;

    printf("Média ponderada: %.2f\n", media);

    if (media < 3.0) {
        printf("Situação: Reprovado\n");
    } else if (media < 5.0) {
        printf("Situação: Em Recuperação\n");
    } else {
        printf("Situação: Aprovado\n");
    }

    return 0;
}