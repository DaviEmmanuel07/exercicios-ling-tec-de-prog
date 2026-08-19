#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  
int main(int argc, char *argv[])  { 
       
    int diasTotais, anos, meses, dias, restoDias;
    
    printf("insira a sua idade em diasTotais: ");
    scanf("%d", &diasTotais);
    anos = diasTotais /365;
    restoDias = diasTotais % 365;
    meses = restoDias / 30;
    dias = restoDias % 30;

    printf("resultado anos: %d meses: %d dias: %d", anos, meses, dias);


return 0;

}
 
