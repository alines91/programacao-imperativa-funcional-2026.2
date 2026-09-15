#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593

int main() {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    float area = 4 * PI * raio * raio;
    float volume = (4.0f / 3.0f) * PI * raio * raio * raio;

    printf("Área da superfície: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}