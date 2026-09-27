#include <stdio.h>
#include <stdlib.h>

int main() {
    int senhaCorreta = 2026;
    int tentativa;
    int acertou = 0;
    
    for (int i = 1; i <= 3; i++) {
        printf("Tentativa %d de 3 - Digite a senha: ", i);
        scanf("%d", &tentativa);
        
        if (tentativa == senhaCorreta) {
            acertou = 1;
            break;
        } else {
            printf("Senha incorreta!\n\n");
        }
    }
    
    if (acertou) {
        printf("Acesso Permitido!\n");
    } else {
        printf("Conta Bloqueada por Segurança!\n");
    }
    
    system("PAUSE");
    return 0;
}