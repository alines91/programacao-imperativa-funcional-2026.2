#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593

float area(float r);

int main() {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    printf("Área da esfera: %.2f\n", area(raio));

    return 0;
}

float area(float r) {
    return 4 * PI * r * r;
}