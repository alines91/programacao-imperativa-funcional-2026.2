/*Questão 11. Cálculo Salarial com Gratificação e Impostos — Uma empresa contrata um 
técnico a R$  45,00 por dia trabalhado. Crie um programa em C que solicite o número de 
dias trabalhados, calcule o  salário bruto, adicione uma gratificação de 5% sobre o 
bruto e desconte 8% de imposto de renda  sobre o bruto. Ao final, exiba o holerite 
detalhado com o valor líquido a receber. */


#include <stdio.h>
#include <stdlib.h>

int main() {

    const float valor_diario = 45.00;
    float salario_bruto, gratificacao, imposto, salario_liquido;
    int dias_trabalhados;

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    salario_bruto = valor_diario * dias_trabalhados;
    gratificacao = salario_bruto * 0.05;
    imposto = salario_bruto * 0.08;
    salario_liquido = salario_bruto + gratificacao - imposto;

    printf("Holerite:\n");
    printf("Salário Bruto: R$ %.2f\n", salario_bruto);
    printf("Gratificação (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto de Renda (8%%): R$ %.2f\n", imposto);
    printf("Salário Líquido a Receber: R$ %.2f\n", salario_liquido);


    system("PAUSE");
    return 0;
}