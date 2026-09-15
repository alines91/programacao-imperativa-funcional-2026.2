#include <stdio.h>
#include <stdlib.h>

#define TAXA_DIARIA 30.0
#define IMPOSTO 0.08

int main() {
    int dias_trabalhados;

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    double bruto = dias_trabalhados * TAXA_DIARIA;
    double desconto = bruto * IMPOSTO;
    double liquido = bruto - desconto;

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Valor liquido: R$ %.2f\n", liquido);

    return 0;
}