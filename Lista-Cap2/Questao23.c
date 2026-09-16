#include <stdio.h>
#include <stdlib.h>

int main() {
    int hora_inicio, minuto_inicio, segundo_inicio;
    int duracao_segundos;

    printf("Digite o horario de inicio (h m s): ");
    scanf("%d %d %d", &hora_inicio, &minuto_inicio, &segundo_inicio);

    printf("Digite a duracao total (em segundos): ");
    scanf("%d", &duracao_segundos);

/* aqui precisei da ajuda da minha amiga ia pra me dizer que era mais facil converter
tudo primeiro */

    int total_segundos_inicio = hora_inicio * 3600 + minuto_inicio * 60 + segundo_inicio;
    int total_segundos_fim = total_segundos_inicio + duracao_segundos;

    total_segundos_fim = total_segundos_fim % 86400;

    int hora_fim = total_segundos_fim / 3600;
    int minuto_fim = (total_segundos_fim % 3600) / 60;
    int segundo_fim = total_segundos_fim % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", hora_fim, minuto_fim, segundo_fim);

    return 0;
}