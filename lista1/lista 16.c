#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  /*Ler 20 valores reais e imprimir seu somatório */

  float valor[20], soma;

  for (size_t i = 0; i < 20; i++) {
    scanf("%f",&valor[i]);
    soma = soma + valor[i];
  }
printf("%f\n",soma );
}
