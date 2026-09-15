#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

char ch;

printf("Pressione uma tecla: ");
ch = getch();

printf("\nSucessora ASCII: %c\n", ch +1);

return 0;

}