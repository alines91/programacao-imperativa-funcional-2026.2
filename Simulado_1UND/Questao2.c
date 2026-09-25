/* #include <stdio.h> 
#include <stdlib.h>; 
int Main() 
{ 
 int idade = 20; 
 printf( A idade do aluno eh: %d anos.. , idade);

 cout << endl; 
 system("PAUSE"); 
 return 0;
}

O código tem diversos erros críticos. Segue abaixo a versão funcional e corrigida: */ 

#include <stdio.h> 
#include <stdlib.h>
#include <windows.h>

int main() { 
 int idade = 20; 
 
 printf("A idade do aluno eh: %d anos", idade);

 system("PAUSE"); 
 return 0; 
}

