#include <stdio.h>

int main() {
    int segundos_totais, horas, minutos, segundos, resto;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos_totais);

    horas = segundos_totais / 3600;
    resto = segundos_totais % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d segundos correspondem a %d horas, %d minutos e %d segundos.\n", segundos_totais, horas, minutos, segundos);

    return 0;
}