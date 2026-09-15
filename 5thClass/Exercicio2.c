#include <stdio.h>
#include <stdlib.h>

int main() {

    for(int j = 1; j <= 10; j++) {
        printf(".:: Tabuada do %d ::.\n", j);
        for (int i = 1; i<= 10; i++) {
            printf("%2d x %2d = %d\n", j, i, j *i);
        }


    }

    return 0;
}