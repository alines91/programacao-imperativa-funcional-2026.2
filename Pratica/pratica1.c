#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i, soma = 0, pares = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        soma += i;

        if (i % 2 == 0) {
            pares += i;
        } else {
            continue;
        }
    }

    printf("A soma dos numeros ate %d e %d, e a soma dos pares é %d", num, soma, pares);

    /*system('PAUSE')*/
    return 0;
}