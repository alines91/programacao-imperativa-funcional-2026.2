#include <stdio.h>
#include <stdlib.h>

int ehBissexto(int ano);

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ehBissexto(ano) == 1) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }

    return 0;
}

int ehBissexto(int ano) {
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    }
    return 0;
}