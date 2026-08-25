#include <stdio.h>
#include <stdlib.h>

int main(){

float nota1, nota2, nota3, nota4, media;

printf("Digite a primeira nota:");
scanf("%f", &nota1);

printf("\nDigite a segunda nota:");
scanf("%f", &nota2);

printf("\nDigite a terceira nota:");
scanf("%f", &nota3);

printf("\nDigite a quarta nota:");
scanf("%f", &nota4);

printf("\nNota 1: %.2f \tNota 2: %.2f \tNota 3: %.2f \tNota 4: %.2f", nota1, nota2, nota3, nota4);

media = (nota1 + nota2 + nota3 + nota4) / 4.0;

printf("\n\nMédia: %.2f", media);

return 0;

}