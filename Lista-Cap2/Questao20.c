#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double lado_a, lado_b;

    printf("Digite os dois catetos (lado_a e lado_b): ");
    scanf("%lf %lf", &lado_a, &lado_b);

    double hipotenusa = sqrt(pow(lado_a, 2) + pow(lado_b, 2));

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}