#include <stdio.h>
#include <stdlib.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main() {
    float preco, subtotal, total, pago;
    int quantidade, opcaoPagamento;

    printf("Digite o preço unitário: R$ ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("Forma de pagamento (1 = À vista com 10%% de desconto, 2 = Outras): ");
    scanf("%d", &opcaoPagamento);

    if (preco < 0 || quantidade < 0 || (opcaoPagamento != 1 && opcaoPagamento != 2)) {
        printf("Erro: dados inválidos!\n");
        return 1;
    }

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcaoPagamento);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("Digite o valor pago: R$ ");
    scanf("%f", &pago);

    if (pago < total) {
        printf("Erro: valor pago insuficiente!\n");
        return 1;
    }

    printf("Troco: R$ %.2f\n", calculaTroco(total, pago));

    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90;
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}