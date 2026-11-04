#include <stdio.h>
#include <stdlib.h>

int main() {
    float total, valor_final, parcela, comissao;
    int opcao;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &total);

    printf("Forma de pagamento:\n");
    printf("1 - À vista (10%% de desconto)\n");
    printf("2 - Parcelado em 3x sem juros\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            valor_final = total * 0.90f;
            comissao = valor_final * 0.05f;
            printf("Valor final a pagar: R$ %.2f\n", valor_final);
            printf("Comissão do vendedor: R$ %.2f\n", comissao);
            break;
        case 2:
            parcela = total / 3.0f;
            comissao = total * 0.05f;
            printf("Valor de cada parcela (3x): R$ %.2f\n", parcela);
            printf("Comissão do vendedor: R$ %.2f\n", comissao);
            break;
        default:
            printf("Erro: opção inválida!\n");
    }

    return 0;
}