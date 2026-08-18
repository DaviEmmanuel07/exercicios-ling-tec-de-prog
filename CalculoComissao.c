#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  
int main(int argc, char *argv[])  {
 
  float salario, vendas, comissao, total;
  printf("Insira o valor do salario e o valor de vendas: ");
  scanf("%f %f", &salario, &vendas);
 
  comissao = vendas*0.15;
  total = salario + comissao;

  printf("O total recebido esse mes foi: %.2f", total);
 return 0;
}
