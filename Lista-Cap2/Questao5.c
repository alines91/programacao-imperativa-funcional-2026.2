/*

a) i < j + 3
j + 3 = 2 + 3 = 5 -> 1 < 5 -> verdadeiro -> 1
b) 2*i - 7 <= j - 8
2*1 - 7 = -5 -> j - 8 = 2 - 8 = -6 -> -5 <= -6? falso -> 0
c) -x + y >= 2.0*y
-3.3 + 4.4 = 1.1 -> 2.0 * 4.4 = 8.8 -> 1.1 >= 8.8? falso -> 0
d) x == y
3.3 == 4.4? falso -> 0
e) !(n - j)
n - j = 2 - 2 = 0 -> !0 = verdadeiro -> 1
f) !n - j
Precedência: ! tem prioridade sobre -, então é (!n) - j.
!n = !2 -> como n é diferente de zero, !n = falso = 0 -> 0 - j = 0 - 2 -> -2
(esse é o valor numérico resultante, não um simples 0/1, pois a subtração não é operador relacional)
g) i && j && k
1 && 2 && 3 -> todos diferentes de zero -> verdadeiro -> 1
h) i || j - 3 && k
Precedência: - primeiro, depois &&, depois ||.
j - 3 = 2 - 3 = -1 -> -1 && k = -1 && 3 -> ambos diferentes de zero -> verdadeiro (1) -> i || 1 = 1 || 1 -> 1
i) i < j && 2 >= k
i < j -> 1 < 2 -> verdadeiro (1) -> 2 >= k -> 2 >= 3 -> falso (0) -> 1 && 0 -> 0
j) i == 2 || j == 4 || k == 5
i == 2 -> falso -> j == 4 -> falso -> k == 5 -> falso -> falso || falso || falso -> 0





*/