/*Questão 11. Cálculo Salarial com Gratificação e Impostos — Uma empresa contrata um técnico a R$  45,00 por dia 
trabalhado. Crie um programa em C que solicite o número de dias trabalhados, calcule o  salário bruto, adicione 
uma gratificação de 5% sobre o bruto e desconte 8% de imposto de renda  sobre o bruto. Ao final, exiba o holerite 
detalhado com o valor líquido a receber. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int diasTrabalhados;
    double salarioBruto, gratificacao, imposto, salarioLiquido;
    const double VALOR_DIA = 45.00;
    
    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);
    
    salarioBruto = diasTrabalhados * VALOR_DIA;
    gratificacao = salarioBruto * 0.05;
    imposto = salarioBruto * 0.08;
    salarioLiquido = salarioBruto + gratificacao - imposto;
    
    printf("\n----- HOLERITE -----\n");
    printf("Dias trabalhados:     %d\n", diasTrabalhados);
    printf("Valor por dia:        R$ %.2f\n", VALOR_DIA);
    printf("Salário Bruto:        R$ %.2f\n", salarioBruto);
    printf("(+) Gratificação 5%%: R$ %.2f\n", gratificacao);
    printf("(-) Imposto 8%%:      R$ %.2f\n", imposto);
    printf("---------------------\n");
    printf("Salário Líquido:      R$ %.2f\n", salarioLiquido);
    
    system("PAUSE");
    return 0;
}