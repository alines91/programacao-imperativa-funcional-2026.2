#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char operacao;
    double a, b;

    printf("===== CALCULADORA =====\n");
    printf("+  Soma\n");
    printf("-  Subtração\n");
    printf("*  Multiplicação\n");
    printf("/  Divisão\n");
    printf("^  Potenciação\n");
    printf("Escolha a operação: ");
    scanf(" %c", &operacao);

    printf("Digite os dois operandos: ");
    scanf("%lf %lf", &a, &b);

    switch (operacao) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Erro: divisão por zero não é permitida!\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;
        case '^':
            printf("%.2f ^ %.2f = %.2f\n", a, b, pow(a, b));
            break;
        default:
            printf("Erro: operação inválida!\n");
    }

    return 0;
}