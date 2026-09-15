#include <stdio.h>
#include <stdlib.h>

int main() {
int valor_inteiro;
valor_inteiro = 2.97;
printf("O valor armazenado eh: %d\n", valor_inteiro);

system("PAUSE");
return 0;

}

/*

a) Qual é o valor numérico que será efetivamente exibido no console ao executar esse
programa? 
O valor é 2

b) Explique por que isso ocorre. Qual é o nome do fenômeno que acontece nessa atribuição?
Por que a variável foi declarada como inteira, e o valor digitado era decimal. O programa só lê até o ponto.

c) Como este tipo de comportamento pode ser evitado ou controlado explicitamente em C pelo
programador caso ele necessite arredondar o valor ou manter a precisão?
Declarando o valor como float

*/