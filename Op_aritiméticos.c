#include <stdio.h>

int main(void) {
  int dado;
  printf("*****Operadores de atibuição aritméticos***** \n");
  printf("\n");
  
  printf("Digite um valor: ");
  scanf("%d", &dado);
  
  printf("Dado antes do incremento: %d. \n", dado);
  printf("\n");

  dado++;
  printf("Depois do incremento: %d. \n" , dado);

  dado--;
  printf("Depois do decremento: %d. \n", dado);

  dado += 3;
  printf("Depois do incremento em 3 unidades: %d. \n", dado);

  dado -= 2;
  printf("Depois do decremento em 2 unidades: %d. \n", dado);

  dado *= 10;
  printf("Depois de multiplicar por 10: %d. \n", dado);
  
  
  return 0;
}