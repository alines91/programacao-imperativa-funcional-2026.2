#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota final (0.0 a 10.0): ");
    scanf("%f", &nota);
    printf("Digite o número de faltas: ");
    scanf("%d", &faltas);

    if (nota < 0.0 || nota > 10.0 || faltas < 0) {
        printf("Erro: nota ou faltas inválidas!\n");
        return 1;
    }

    if (nota >= 9.0) {
        conceito = (faltas <= 20) ? 'A' : 'B';
    } else if (nota >= 7.5) {
        conceito = (faltas <= 20) ? 'B' : 'C';
    } else if (nota >= 5.0) {
        conceito = (faltas <= 20) ? 'C' : 'D';
    } else if (nota >= 4.0) {
        conceito = (faltas <= 20) ? 'D' : 'E';
    } else {
        conceito = 'E';
    }

    printf("Conceito: %c\n", conceito);

    return 0;
}