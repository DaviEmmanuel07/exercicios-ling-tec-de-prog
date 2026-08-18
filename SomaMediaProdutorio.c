#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  
int main(int argc, char *argv[])  {
 
  float a, b, c, d, soma, media, produtorio;

  printf("Insira o valor dos 4 elementos para a soma: ");
  scanf("%f %f %f %f", &a, &b, &c, &d),
  soma = (a + b + c + d);
  printf("O valor da soma deu: %.2f\n", soma );

  media = soma / 4;
  printf("O resultado da media é:%.2f \n", media);

 produtorio = a*b*c*d;
 printf("o resultado do produtorio é:%.2f", produtorio);


 return 0;
}
