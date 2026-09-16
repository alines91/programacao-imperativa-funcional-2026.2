#include <stdio.h>
#include <stdlib.h>

#define TAXA_NORMAL 10.0
#define TAXA_EXTRA 15.0
#define FAIXA_ISENCAO 12000.0
#define ALIQUOTA_IMPOSTO 0.10

int main(void) {
    float horas_normais, horas_extras;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horas_normais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horas_extras);

    float salario_bruto = (horas_normais * TAXA_NORMAL) + (horas_extras * TAXA_EXTRA);
    float base_tributavel = (salario_bruto > FAIXA_ISENCAO) ? (salario_bruto - FAIXA_ISENCAO) : 0;
    float imposto = base_tributavel * ALIQUOTA_IMPOSTO;

    float salario_liquido = salario_bruto - imposto;

    printf("Salario bruto anual: R$ %.2f\n", salario_bruto);
    printf("Imposto retido: R$ %.2f\n", imposto);
    printf("Salario liquido anual: R$ %.2f\n", salario_liquido);

    return 0;
}