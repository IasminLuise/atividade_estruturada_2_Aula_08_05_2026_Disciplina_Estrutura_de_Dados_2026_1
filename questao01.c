// Questão 01

#include <stdio.h> 

void Teste1(int); 
void Teste2(int *); 
int Teste3(int); 
int x = 20; 

int main(void) { 
  int numero = 10, outroNumero; 

Teste1(numero); 
printf("Valor de numero (apos Teste1) = %d\n", numero); 
printf("X = %d\n", x); 
 
Teste2(&numero); 
printf("Valor de numero (apos Teste2) = %d\n", numero);
printf("X = %d\n", x); 
 
outroNumero = Teste3(numero); 
printf("Valor de outro numero (apos Teste3) = %d\n", outroNumero); 
printf("X = %d\n", x); 
 
return 0; 
  } 
void Teste1(int numero) { numero = numero + x; x++; } void Teste2(int *numero) { int valor = 100; *numero = *numero + valor; x++; } 
int Teste3(int n) { int valor = 200; n = n + valor; x--; return n; } 
