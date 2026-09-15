#include <stdio.h>
#include <stdlib.h>

int main() {
    double celsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);

    double fahrenheit = (celsius * 9.0 / 5.0) + 32;
    double kelvin = celsius + 273.15;

    printf("Fahrenheit: %.2f\n", fahrenheit);
    printf("Kelvin: %.2f\n", kelvin);

    return 0;
}