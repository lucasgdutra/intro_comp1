#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  /*Calcula e imprima o resultado da soma dos n primeiros termos da série:  1/2 + 1/4 + 1/n */
  
  int n;
  float soma;
  scanf("%d",&n );

  for (size_t i = 1; i <= n; i++) {
    soma = soma + (1.0/(i*2.0));
  }
  printf("%f\n",soma);
}
