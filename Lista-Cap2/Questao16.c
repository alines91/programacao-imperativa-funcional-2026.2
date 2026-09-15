#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float altura_degrau_cm, altura_total_m;

    printf("Digite a altura de cada degrau (cm): ");
    scanf("%f", &altura_degrau_cm);

    printf("Digite a altura total a subir (m): ");
    scanf("%f", &altura_total_m);

    float altura_total_cm = altura_total_m * 100.0f;

    int degraus = (int) ceil(altura_total_cm / altura_degrau_cm);

    printf("Numero minimo de degraus: %d\n", degraus);

    return 0;
}