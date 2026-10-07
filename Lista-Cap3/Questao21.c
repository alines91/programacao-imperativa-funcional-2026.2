#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char secreto, palpite;
    int tentativas = 0;

    srand(time(NULL));
    secreto = rand() % 26 + 'a';

    printf("Adivinhe a letra minuscula (a-z)!\n");

    do {
        printf("Seu palpite: ");
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite < secreto) {
            printf("A letra secreta vem DEPOIS de '%c'.\n", palpite);
        } else if (palpite > secreto) {
            printf("A letra secreta vem ANTES de '%c'.\n", palpite);
        }
    } while (palpite != secreto);

    printf("Parabéns! Você acertou em %d tentativa(s).\n", tentativas);

    return 0;
}