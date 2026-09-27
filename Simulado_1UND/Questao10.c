/*Questão 10. Resto da Divisão (`%`) e Decomposição do Tempo — Desenvolva um programa em C  que receba uma quantidade 
inteira de segundos informada pelo usuário. O programa deve calcular e  exibir o tempo equivalente decomposto em Horas, 
Minutos e Segundos restantes (Exemplo: 3665  segundos correspondem a 1 hora, 1 minuto e 5 segundos). */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int seg, min, horas, seg2;

    printf("Digite os segundos:");
    scanf("%d", &seg);
    printf("\n");

    horas = seg / 3600;
    min = (seg % 3600) / 60;
    seg2 = seg % 60;
    
    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s)\n", 
           seg, horas, min, seg2);
    
    return 0;
}
