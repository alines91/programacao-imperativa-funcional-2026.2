#include <stdio.h>
#include <stdlib.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main() {
    int opcao;
    float x, y;

    printf("===== CALCULADORA =====\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Erro: opção inválida!\n");
        return 1;
    }

    printf("Digite os dois valores: ");
    scanf("%f %f", &x, &y);

    switch (opcao) {
        case 1:
            printf("%.2f + %.2f = %.2f\n", x, y, soma(x, y));
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", x, y, subtrai(x, y));
            break;
        case 3:
            printf("%.2f * %.2f = %.2f\n", x, y, multiplica(x, y));
            break;
        case 4:
            if (y == 0) {
                printf("Erro: divisão por zero não é permitida!\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", x, y, divide(x, y));
            }
            break;
    }

    return 0;
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}