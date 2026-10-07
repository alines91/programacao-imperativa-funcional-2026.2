#include <stdio.h>

int main() {
    float nota, maior, menor, soma = 0;
    int cont = 0;

    printf("Digite uma nota (-1.0 para sair): ");
    scanf("%f", &nota);

    maior = nota;
    menor = nota;

    while (nota != -1.0) {
        if (nota > maior) maior = nota;
        if (nota < menor) menor = nota;
        soma += nota;
        cont++;

        printf("Digite uma nota (-1.0 para sair): ");
        scanf("%f", &nota);
    }

    if (cont > 0) {
        printf("Total de alunos: %d\n", cont);
        printf("Maior nota: %.1f\n", maior);
        printf("Menor nota: %.1f\n", menor);
        printf("Média: %.2f\n", soma / cont);
    } else {
        printf("Nenhuma nota foi digitada.\n");
    }

    return 0;
}