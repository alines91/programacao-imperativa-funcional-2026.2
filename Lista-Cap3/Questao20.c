#include <stdio.h>

int main() {
    int c;

    printf("Dec  Hex  Char\n");
    for (c = 32; c <= 126; c++) {
        printf("%3d  %3X  %c\n", c, c, c);
    }

    return 0;
}