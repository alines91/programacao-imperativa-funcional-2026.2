#include <stdio.h>
#include <stdlib.h>

int main() {
    char letra_maiuscula, letra_minuscula;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letra_maiuscula);

    /* Na tabela ASCII, as letras maiúsculas (A-Z) e minúsculas (a-z) tem uma 
    diferenca fixa de 32 posições entre si. Então somando 32
    ao código da maiúscula, chega direto na minúscula correspondente */
    
    letra_minuscula = letra_maiuscula + 32; 

    printf("Letra minuscula: %c\n", letra_minuscula);

    return 0;
}