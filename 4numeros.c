#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
  
  int numero[4];
  printf("digite 4 numeros em posicoes A B C D: ");
  for (int i = 0; i < 4; i++){
    scanf("%d", &numero[i]);
	}
 
 printf("os numeros trocado na posicao B D A C sao: %d %d %d %d", numero[1], numero[3], numero[0], numero[2]);
  


	return 0;
}
