#include <stdio.h>
#include <stdlib.h>
#include "areas.h"

int main() {
    float raio, base, altura;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    printf("Digite a base e a altura: ");
    scanf("%f %f", &base, &altura);

    printf("Área do círculo: %.2f\n", A_CIRC(raio));
    printf("Área do retângulo: %.2f\n", A_RET(base, altura));
    printf("Área do triângulo: %.2f\n", A_TRI(base, altura));

    return 0;
}