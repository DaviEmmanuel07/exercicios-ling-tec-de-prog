#include <stdio.h>

  /* converssor de temperatura entre celsius(C) e Fahrenheit (F) */
int main()
{
   printf("escreva a temperatura em C° para converter em F° ou em F° para C°\n");
   printf("indique se usou celsius(C°) e Fahrenheit (F°):");
   float temperaturaEntrada, temperaturaSaida;
   char escala;
   scanf("%f %c", &temperaturaEntrada, &escala);
   
  

  if (escala == 'C' || escala == 'c'){
       temperaturaSaida = (temperaturaEntrada * 9/5) + 32;
   } else {
       temperaturaSaida = (temperaturaEntrada - 32) * 5/9;
   }

   printf("Sua conversao é:%.2f", temperaturaSaida);
  
   return 0;
}
