#include <stdio.h>

int main() {
    int num, i, achou = 0;

    printf("Digite um número limite positivo: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            achou = 1;
        }
    }

    if (achou) {
        printf("\n");
    } else {
        printf("Nenhum número atende a condição.\n");
    }

    return 0;
}