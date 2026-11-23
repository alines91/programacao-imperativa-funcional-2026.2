#include <stdio.h>
#include <stdlib.h>

float celsius(float fahr);

int main() {
    float f, c;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &f);

    c = celsius(f);

    printf("Temperatura em Celsius: %.2f\n", c);

    return 0;
}

float celsius(float fahr) {
    return (fahr - 32) * 5.0 / 9.0;
}