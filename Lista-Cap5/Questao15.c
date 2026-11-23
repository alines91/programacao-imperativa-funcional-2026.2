#include <stdio.h>
#include <stdlib.h>

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite as três notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = mediaPonderada(nota1, nota2, nota3);

    printf("Média ponderada: %.2f\n", media);
    exibeSituacao(media);

    return 0;
}

float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 2 + n2 * 3 + n3 * 5) / 10.0;
}

void exibeSituacao(float media) {
    if (media >= 5.0) {
        printf("Situação: Aprovado\n");
    } else if (media >= 3.0) {
        printf("Situação: Em Recuperação\n");
    } else {
        printf("Situação: Reprovado\n");
    }
}