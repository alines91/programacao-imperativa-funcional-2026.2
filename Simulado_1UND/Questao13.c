/*Questão 13. Cálculo do Fatorial com Tratamento do Zero e Tipo `long long int` — 
Escreva um  programa em C que solicite um número inteiro N e calcule o seu fatorial (N!).
 Lembre-se que 0! = 1 e 1!  = 1. O programa deve utilizar a variável do resultado como 
 `long long int` com o especificador `%lld`  para evitar estouro de memória e 
 tratar entradas inválidas (números negativos). */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

    long long int fatorial = 1;
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        fatorial *= i;
    }

    printf("O fatorial de %d é: %lld\n", n, fatorial);

    system("PAUSE");
    return 0;
 }