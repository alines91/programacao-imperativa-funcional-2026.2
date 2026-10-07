#include <stdio.h>

int main() {
    int c;
    double f, k;

    printf("  Celsius   Fahrenheit      Kelvin\n");
    for (c = 0; c <= 100; c += 5) {
        f = (9.0 * c) / 5 + 32;
        k = c + 273.15;
        printf("%8d %12.2f %11.2f\n", c, f, k);
    }

    return 0;
}