#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

int main(int argc, char *argv[])  {

    float r, volume;
    
    printf("insira o valor do raio da esfera: ");
    scanf("%f", &r);
    volume = 4/3.0 * pi * pow(r, 3); 

    printf("o volume do circulo é: %f", volume);

    return 0;
}
