#include <stdio.h>

int main() {
    int senha = 2026;
    int tentativa, i;
    int acertou = 0;

    for (i = 1; i <= 3; i++) {
        printf("Tentativa %d de 3 - Digite a senha: ", i);
        scanf("%d", &tentativa);

        if (tentativa == senha) {
            acertou = 1;
            break;
        }
        printf("Senha incorreta!\n");
    }

    if (acertou) {
        printf("Acesso Concedido! Tentativas utilizadas: %d\n", i);
    } else {
        printf("Conta Bloqueada por Segurança!\n");
    }

    return 0;
}