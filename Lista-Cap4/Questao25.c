#include <stdio.h>
#include <stdlib.h>

int main() {
    int total, entregue, troco, troco_original;
    int n100, n50, n20, n10, n5 = 0, n2;

    printf("Digite o valor total a pagar: R$ ");
    scanf("%d", &total);
    printf("Digite o valor entregue pelo cliente: R$ ");
    scanf("%d", &entregue);

    if (total <= 0 || entregue <= 0) {
        printf("Erro: os valores devem ser inteiros positivos!\n");
        return 1;
    }

    if (entregue < total) {
        printf("Erro: valor entregue insuficiente!\n");
        return 1;
    }

    troco = entregue - total;
    troco_original = troco;

    if (troco == 0) {
        printf("Sem troco.\n");
        return 0;
    }

    if (troco % 2 != 0) {
        if (troco < 5) {
            printf("Erro: troco de R$ %d não pode ser formado com as cédulas disponíveis!\n", troco);
            return 1;
        }
        n5 = 1;
        troco -= 5;
    }

    n100 = troco / 100;
    troco = troco % 100;

    n50 = troco / 50;
    troco = troco % 50;

    n20 = troco / 20;
    troco = troco % 20;

    n10 = troco / 10;
    troco = troco % 10;

    n2 = troco / 2;

    printf("Troco: R$ %d\n", troco_original);
    if (n100 > 0) printf("%d cédula(s) de R$ 100\n", n100);
    if (n50 > 0)  printf("%d cédula(s) de R$ 50\n", n50);
    if (n20 > 0)  printf("%d cédula(s) de R$ 20\n", n20);
    if (n10 > 0)  printf("%d cédula(s) de R$ 10\n", n10);
    if (n5 > 0)   printf("%d cédula(s) de R$ 5\n", n5);
    if (n2 > 0)   printf("%d cédula(s) de R$ 2\n", n2);

    return 0;
}