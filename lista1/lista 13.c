#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  /*Ler o raio e calcular a área de 10 círculos. */

  float raio[10], area[10];

  for (size_t i = 0; i < 10; i++) {
    scanf("%f",&raio[i] );
    area[i] = M_PI * (raio[i]*raio[i]);
  }
  for (size_t i = 0; i < 10; i++) {
    printf("area = %f\n",area[i]);
  }
}
