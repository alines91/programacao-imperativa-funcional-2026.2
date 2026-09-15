#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float lado, base_retangulo, altura_retangulo, base_triangulo, altura_triangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    float area_quadrado = lado * lado;

    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &base_retangulo, &altura_retangulo);
    float area_retangulo = base_retangulo * altura_retangulo;

    printf("Digite a base e a altura do triangulo retangulo: ");
    scanf("%f %f", &base_triangulo, &altura_triangulo);
    float area_triangulo = (base_triangulo * altura_triangulo) / 2.0f;

    printf("Area do quadrado: %.2f\n", area_quadrado);
    printf("Area do retangulo: %.2f\n", area_retangulo);
    printf("Area do triangulo: %.2f\n", area_triangulo);

    return 0;
}