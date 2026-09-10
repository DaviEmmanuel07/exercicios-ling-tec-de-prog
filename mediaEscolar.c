#include <stdio.h>
 /* Calculo de media escolas com 3 notas */

int main(){
 
  printf("Escreva as tres notas para fazer a media: ");
  double nota1, nota2, nota3, media;
  scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

  media = ( nota1 + nota2 + nota3) / 3;

  if (media >=6.0 && media <=10.0) {
    printf ("APROVADO!");
 } else if (media >=3.0 && media <= 5.9 ){
    printf("RECUPERCAO!");
 } else {
    printf("REPROVADO!");
 }
 
 return 0;




}
