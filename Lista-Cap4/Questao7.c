#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double x;

    printf("Digite um número real: ");
    scanf("%lf", &x);

    if (x >= 0) {
        printf("Raiz quadrada de %.2f = %.2f\n", x, sqrt(x));
    } else {
        printf("Quadrado de %.2f = %.2f\n", x, x * x);
    }

    return 0;
}