#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor, aliquota, preco_final;
    int estado;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);

    printf("Estado de destino (1 = MG, 2 = SP, 3 = RJ, 4 = MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            aliquota = 0.07f;
            break;
        case 2:
            aliquota = 0.12f;
            break;
        case 3:
            aliquota = 0.15f;
            break;
        case 4:
            aliquota = 0.08f;
            break;
        default:
            printf("Erro: código de estado inválido!\n");
            return 1;
    }

    preco_final = valor + valor * aliquota;

    printf("Preço final com imposto: R$ %.2f\n", preco_final);

    return 0;
}