#include <stdio.h>
#include <stdlib.h>
/*#include <windows.h>*/

int main(){
    int i, j;
    for(int i = 0, j = i; i <= 100; i++, j++){
        printf("%3d", i + j);
    }

    /*system("PAUSE");*/
    return 0;

}