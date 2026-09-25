#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int qtdNotas;
    float nota, media;
    char ch = 's';
    
    do {
        system("cls");
        

/* AQUI VAI O PROGRAMA QUE VOCE QUER QUE REPITA*/

    do {
    printf("\nDeseja repetir o programa? (s - sim / n - não): ");
    ch = getche();
    printf("\n");
    } while(ch != 's' && ch != 'S' && ch != 'n' && ch != 'N');

    } while (ch == 's' || ch == 'S');

    system("PAUSE");
    return 0;

}