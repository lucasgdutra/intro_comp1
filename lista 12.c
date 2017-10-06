#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  /*Ler base e altura de 5 triângulos, calcular e imprimir a área de cada um deles. */

  float base[5], altura[5], area[5];

  for (size_t i = 0; i < 5; i++) {
    scanf("%f %f",&base[i], &altura[i] );
    area[i] = (base[i] * altura[i]) / 2.0;
  }
  for (size_t i = 0; i < 5; i++) {
    printf("area = %f\n",area[i]);
  }
}
