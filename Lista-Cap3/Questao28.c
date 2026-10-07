#include <stdio.h>

int main() {
    int opcao;
    double salario, novo, desconto;

    do {
        printf("\n--- FOLHA DE PAGAMENTO ---\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salário: ");
                scanf("%lf", &salario);
                if (salario <= 2000.00) {
                    novo = salario * 1.15;
                } else {
                    novo = salario * 1.10;
                }
                printf("Novo salário: R$ %.2f\n", novo);
                break;
            case 2:
                printf("Digite o salário: ");
                scanf("%lf", &salario);
                if (salario <= 3000.00) {
                    desconto = salario * 0.08;
                } else {
                    desconto = salario * 0.15;
                }
                printf("Imposto retido: R$ %.2f\n", desconto);
                printf("Salário líquido: R$ %.2f\n", salario - desconto);
                break;
            case 3:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opção inválida! Escolha 1, 2 ou 3.\n");
        }
    } while (opcao != 3);

    return 0;
}