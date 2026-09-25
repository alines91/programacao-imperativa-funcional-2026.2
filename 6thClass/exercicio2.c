#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
    unsigned char ch;

    for(ch = getche(); ch != 'q'; ch = getch()){
        printf("%3c", ch + 1);

    }

    system("PAUSE");
    return 0;

}