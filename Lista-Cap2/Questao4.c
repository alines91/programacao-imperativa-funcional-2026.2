/* Operadores de Atribuição Composta e Precedência — Os operadores de
atribuição composta (+=, -=, *=, /=, %=) executam uma operação aritmética e uma atribuição
simultaneamente. Determine quais serão os valores das variáveis a, b, c e d após a execução
sequencial completa das seguintes instruções de inicialização e atribuição em C. Justifique seus
cálculos apresentando a ordem de avaliação passo a passo: 


1) a += b + c;
a = a + (b + c) = 1 + (2+3) = 1 + 5 = 6
a = 6

2) b *= c = d + 2;
= é associativo à direita, então resolve primeiro c = d + 2:
c = 4 + 2 = 6
Depois: b = b * c = 2 * 6 = 12
c = 6, b = 12

3) d %= a + a + a;
a + a + a = 6+6+6 = 18
d = d % 18 = 4 % 18 = 4 (resto da divisão, já que 4 < 18)
d = 4 (não muda)

4) d -= c -= b -= a;
Associatividade à direita, resolve de dentro pra fora:
b -= a → b = 12 - 6 = 6
c -= b → c = 6 - 6 = 0
d -= c → d = 4 - 0 = 4
b = 6, c = 0, d = 4

5) a += b += c += 7;
c += 7 → c = 0 + 7 = 7
b += c → b = 6 + 7 = 13
a += b → a = 6 + 13 = 19
a = 19, b = 13, c = 7


a: 19
b: 13
c: 7
d: 4


*/