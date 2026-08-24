/*
O compilador interpreta sequências de escape delimitadas por aspas simples ('\n', '\t', '\"') como constantes de caractere simples (tipo char), onde cada sequência representa um único valor na tabela ASCII (por exemplo, '\n' é o valor decimal 10, '\t' é 9 e '\"' é 34).
Ao encontrar o especificador %c, o compilador espera receber um caractere individual para substituir na posição correspondente:
1º %c: Recebe '\n' e executa a quebra de linha.
2º %c: Recebe '\t' e insere o espaço de tabulação.
3º %c: Recebe '\"' e imprime o caractere " de abertura.
Imprime a string "Primeiro programa".
2º printf("%c", '\"');: Recebe '\"' via %c e imprime o caractere " de fechamento.

*/