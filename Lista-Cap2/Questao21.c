#include <stdio.h>
#include <stdlib.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    /* O %d aqui faz o compilador interpretar o char como o número
    inteiro que ele realmente é por baixo dos panos, ja que na memória
    todo caractere é armazenado como um código numérico da tabela ASCII */

    printf("O codigo ASCII de '%c' e: %d\n", caractere, caractere);

    return 0;
}