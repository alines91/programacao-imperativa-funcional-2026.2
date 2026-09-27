#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota;
    
    do {
        printf("Digite uma nota (0.0 a 10.0): ");
        scanf("%lf", &nota);
        
        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida! Tente novamente.\n\n");
        }
    } while (nota < 0.0 || nota > 10.0);
    
    printf("\nNota valida digitada: %.1f\n", nota);
    
    system("PAUSE");
    return 0;
}