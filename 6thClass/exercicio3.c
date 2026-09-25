#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int qtdNotas;
    float nota, media = 0.0; /*colocamos 0.0 na media para nao gerar lixo de memoria*/
    
    printf("Digite a quantidade de notas: ");
    scanf("%d", &qtdNotas);

    for(int i = 0; i< qtdNotas; i++){
        printf("Digite a nota %dª: ", i + 1);
        scanf("%f", &nota);
        media += nota;
    }

    media /= qtdNotas;

    printf("A média das notas é %.2f\n", media);

    system("PAUSE");
    return 0;

}