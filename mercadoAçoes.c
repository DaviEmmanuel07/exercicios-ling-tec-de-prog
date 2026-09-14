#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  
  double vp, pvp, preco;
  printf("coloque seu preco e valor patrimonial: ");
  scanf("%lf %lf", &preco, &vp);
  pvp = vp / (preco * 100);
  
  if (preco > 10.00 && pvp > 0.5) {
    printf("Bom/Compra");
} else if (preco < 1.00 && pvp < 1.0) {
    printf("Regular/Espera");
} else if (preco > 5.00 && pvp < 1.2) {
    printf("Ruim/Nao compre");
} else if (preco < 10.00 && pvp > 0.3) {
    printf("Bom/Compra");
} else if (preco > 1.00 && pvp < 0.7) {
    printf("Atencao");
} else {
    printf("Nenhuma recomendacao");
}
  
	return 0;
}
