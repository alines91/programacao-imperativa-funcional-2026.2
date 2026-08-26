#include <stdio.h>

int main() {
    printf("%-10s%s\n", "ALUNO(A)", "NOTA");
    printf("%-10s%s\n", "=========", "=====");
    printf("%-10s%.1f\n", "ALINE", 9.0);
    printf("%-11s%s\n", "MÁRIO", "DEZ"); 
    printf("%-11s%.1f\n", "SÉRGIO", 4.5); 
    printf("%-10s%.1f\n", "SHIRLEY", 7.0);

    return 0;
}