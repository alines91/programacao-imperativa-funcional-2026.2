#include <stdio.h>

int main() {
    int valor, original;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0;

    printf("Digite o valor do saque (inteiro positivo): ");
    scanf("%d", &valor);
    original = valor;

    while (valor >= 100) { valor -= 100; n100++; }
    while (valor >= 50)  { valor -= 50;  n50++;  }
    while (valor >= 20)  { valor -= 20;  n20++;  }
    while (valor >= 10)  { valor -= 10;  n10++;  }
    while (valor >= 5 && valor % 2 == 1) { valor -= 5; n5++; }
    while (valor >= 2)   { valor -= 2;   n2++;   }

    if (valor != 0) {
        printf("Não é possivel sacar R$ %d com essas cédulas.\n", original);
    } else {
        printf("Saque de R$ %d:\n", original);
        if (n100) printf("%d nota(s) de R$ 100\n", n100);
        if (n50)  printf("%d nota(s) de R$ 50\n", n50);
        if (n20)  printf("%d nota(s) de R$ 20\n", n20);
        if (n10)  printf("%d nota(s) de R$ 10\n", n10);
        if (n5)   printf("%d nota(s) de R$ 5\n", n5);
        if (n2)   printf("%d nota(s) de R$ 2\n", n2);
    }

    return 0;
}