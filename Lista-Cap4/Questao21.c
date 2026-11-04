#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, percentual, aumento, novo_salario;
    int cargo;

    printf("Digite o salário atual: R$ ");
    scanf("%f", &salario);

    printf("Código do cargo (1 = Técnico, 2 = Gerente, 3 = Demais): ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            if (salario <= 3000) {
                percentual = 15;
            } else {
                percentual = 10;
            }
            break;
        case 2:
            if (salario <= 5000) {
                percentual = 10;
            } else {
                percentual = 5;
            }
            break;
        case 3:
            percentual = 8;
            break;
        default:
            printf("Erro: código de cargo inválido!\n");
            return 1;
    }

    aumento = salario * percentual / 100;
    novo_salario = salario + aumento;

    printf("Aumento de %.0f%%: R$ %.2f\n", percentual, aumento);
    printf("Novo salário: R$ %.2f\n", novo_salario);

    return 0;
}