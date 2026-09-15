/*

a) Diferença entre ++n e m++

Basicamente a diferença tá em quando o incremento acontece em relação à atribuição.
No ++n (prefixado), primeiro incrementa a variável e só depois usa esse valor já atualizado. Então no Trecho A:
int n = 5;
int x = ++n;
o n vira 6 na hora, e o x já recebe esse 6. Ou seja, n = 6 e x = 6.
Já no m++ (pós-fixado) é o contrário: primeiro usa o valor que a variável tinha antes, e só depois incrementa. No Trecho B:
int m = 5;
int y = m++;
o y pega o valor antigo de m, que era 5, e só depois disso o m passa a valer 6. Ou seja, m = 6 e y = 5.
Repara que no final tanto n quanto m acabam valendo 6 mesmo, a diferença toda tá em qual valor a variável que recebe a atribuição (x ou y) vai guardar.
Vai imprimir:
Trecho A: n = 6, x = 6
Trecho B: m = 6, y = 5

b) Por que o printf("%d\t%d\t%d\n", n, n+1, n++); dá ruim

O problema desse código é que ele fica lendo o valor de n várias vezes e AO MESMO TEMPO modificando ele (por causa do n++), tudo dentro da mesma chamada de função, sem ter uma "ordem garantida" de quando cada coisa acontece.
O grande pulo do gato aqui é que o padrão da linguagem C não define em que ordem os argumentos de uma função vão ser avaliados. Pode ser da esquerda pra direita, da direita pra esquerda, ou qualquer outra ordem — isso fica totalmente a critério do compilador. E o pior: pode até mudar dependendo do nível de otimização usado (tipo -O0 vs -O2 no gcc).
Então imagina: se o compilador resolver avaliar o n++ primeiro, ele já mexe no valor de n antes dos outros dois argumentos serem lidos, e aí a saída fica toda bagunçada. Se resolver avaliar na ordem que "parece óbvia" (esquerda pra direita), dá outro resultado. É basicamente uma loteria.
E isso não é só "ordem incerta", é comportamento indefinido mesmo (undefined behavior) — porque a linguagem não permite você modificar uma variável e ler ela pra outros fins dentro da mesma expressão sem um "ponto de sequência" entre as duas coisas. Sem essa garantia, o compilador literalmente não é obrigado a te dar um resultado consistente, e programa pode até se comportar de forma esquisita se o compilador aplicar otimizações mais agressivas.
Na prática, pra resolver isso é só separar as coisas em instruções diferentes:
c
printf("%d\t%d\t%d\n", n, n+1, n+2);
n++;
assim cada linha tem seu próprio ponto de sequência bem definido e não fica essa bagunça.


*/