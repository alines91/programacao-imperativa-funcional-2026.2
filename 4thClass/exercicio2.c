#include <stdio.h>
#include <stdlib.h>

int main(){

int x = 5;

x = x + 1;
printf("x = %d\n", x);
printf("x = %d\n", ++x);
printf("x = %d\n", x++);
printf("x = %d\n", x);

x = x - 1;
printf("x = %d\n", x);
printf("x = %d\n", --x);
printf("x = %d\n", x--);
printf("x = %d\n", x);

return 0;

}