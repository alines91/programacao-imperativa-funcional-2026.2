#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593

int main() {
    double graus;

    printf("Digite o angulo em graus: ");
    scanf("%lf", &graus);

    double radianos = graus * (PI / 180.0);

    printf("%.2f graus equivalem a %.4f radianos\n", graus, radianos);

    return 0;
}