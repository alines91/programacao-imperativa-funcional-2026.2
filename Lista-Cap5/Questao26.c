#include <stdio.h>
#include <stdlib.h>

long fibonacci(int n);

int main() {
    int quantidade, i;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Erro: a quantidade deve ser positiva!\n");
        return 1;
    }

    for (i = 0; i < quantidade; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Por que a versão recursiva fica lenta pra valores grandes de n:
// cada chamada de fibonacci(n) dispara DUAS novas chamadas, e essas chamadas
// recalculam os mesmos valores várias vezes (por exemplo, fibonacci(30) calcula
// fibonacci(28) duas vezes, fibonacci(27) três vezes, e assim por diante).
// Com isso o número de chamadas cresce de forma exponencial (aproximadamente
// 2^n), então cada termo a mais dobra mais ou menos o tempo de execução.