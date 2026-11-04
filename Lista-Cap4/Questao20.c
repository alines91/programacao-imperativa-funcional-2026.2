#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Erro: o coeficiente a deve ser diferente de zero!\n");
        return 1;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A equação possui uma raiz única: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equação possui duas raízes reais: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}