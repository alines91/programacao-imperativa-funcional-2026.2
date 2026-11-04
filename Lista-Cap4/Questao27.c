#include <stdio.h>
#include <stdlib.h>

int main() {
    int horas;
    float valor;

    printf("Digite o número de horas inteiras de permanência: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Erro: o número de horas deve ser maior que zero!\n");
        return 1;
    }

    if (horas <= 2) {
        valor = horas * 2.00f;
    } else if (horas <= 4) {
        valor = 4.00f + (horas - 2) * 2.50f;
    } else {
        valor = 4.00f + 5.00f + (horas - 4) * 3.00f;
    }

    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor final cobrado: R$ %.2f\n", valor);

    return 0;
}