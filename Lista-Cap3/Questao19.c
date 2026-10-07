#include <stdio.h>

int main() {
    int n, i;
    long long a = 1, b = 1, termo = 0;

    printf("Digite o número do termo desejado (N): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("N deve ser maior ou igual a 1.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        termo = a;
        printf("%lld ", termo);
        a = b;
        b = termo + b;
    }

    printf("\nO termo %d vale %lld\n", n, termo);

    return 0;
}