#include <stdio.h>
#include <stdlib.h>

int main(){

float tempF, tempC;

printf("Digite a temperatura em Fahrenheit:");
scanf("%f", &tempF);

tempC = (tempF - 32) * 5/9;

printf("A temperatura em Celsius é: %.2fºC\n", tempC);

return 0;

}