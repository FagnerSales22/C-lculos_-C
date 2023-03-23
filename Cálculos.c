#include <stdio.h>

int main(void) {
  int a, b, soma, subtr, mult, divis;
  printf("Cálculos em #C \n ");
  printf("\n");

  printf("Digite o primeiro valor: ");
  scanf("%d", &a); 
  printf("Digite o segundo valor: ");
  scanf("%d", &b);
  printf("\n"); 

  soma = a + b;
  subtr = a - b;
  mult = a * b;
  divis = a / b;

  printf("Resultados: \n");
  printf("\n"); 
  printf("Soma: %d. \n", soma);
  printf("Subtração: %d. \n", subtr);
  printf("Multiplicação: %d. \n", mult);
  printf("Divisão: %d. \n", divis);
  
  return 0;
}