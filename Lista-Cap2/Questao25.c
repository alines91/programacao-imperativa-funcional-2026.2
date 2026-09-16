#include <stdio.h>
#include <stdlib.h>

#define GRATIFICACAO 0.05
#define IMPOSTO 0.07

int main(void) {
    double salario_base;

    printf("Digite o salario-base: ");
    scanf("%lf", &salario_base);

    double gratificacao = salario_base * GRATIFICACAO;
    double imposto = salario_base * IMPOSTO;
    double liquido = salario_base + gratificacao - imposto;

    printf("Salario liquido: R$ %.2f\n", liquido);

    return 0;
}