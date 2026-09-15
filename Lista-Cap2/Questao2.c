/*

a) Por que o uso de funções contidas em <conio.h> deve ser evitado em sistemas modernos
(Linux, macOS, servidores)?
Só funciona em compiladores específicos para Windows/DOS (ex: Borland, alguns ports do MinGW), não existindo em Linux, macOS ou na maioria dos compiladores modernos (GCC, Clang) rodando nesses sistemas.

b) Quais são as funções equivalentes e portáveis fornecidas pela biblioteca padrão <stdio.h>
para entrada e saída de caracteres?
getchar, putchar, scanf, printf

c) Escreva um pequeno trecho de código padrão C que leia um caractere do console de maneira
robusta, ignorando eventuais quebras de linha ('\n') residuais no buffer do teclado.

*/

#include <stdio.h>

int main(void) {
    char c;
    int lixo;

    printf("Digite um caractere: ");
    c = getchar();

    while ((lixo = getchar()) != '\n' && lixo != EOF) {
    }

    printf("Voce digitou: %c\n", c);

    return 0;
}