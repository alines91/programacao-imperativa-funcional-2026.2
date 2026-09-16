#include <stdio.h>
#include <stdlib.h>

int main() {
    float comprimento, largura, preco_metro;

    printf("Digite o comprimento e a largura do terreno (m): ");
    scanf("%f %f", &comprimento, &largura);

    printf("Digite o preço unitário do metro de arame (R$): ");
    scanf("%f", &preco_metro);

    float perimetro = 2 * (comprimento + largura);
    float metros_arame = perimetro * 3;  // precisa de 3 fios esticados
    float custo_total = metros_arame * preco_metro;

    printf("Metros de arame necessários: %.2f\n", metros_arame);
    printf("Custo total do cercamento: R$ %.2f\n", custo_total);

    return 0;
}