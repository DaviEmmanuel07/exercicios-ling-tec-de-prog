#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  
int main(int argc, char *argv[])  {

    double numero;
    printf("escreva um numero para virar notacao cientifica: ");
    scanf("%lf", &numero);

   printf("Em notacao cientifica: %e", numero);

 return 0;
}
