#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  /*Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações*/
  float num[2], div;

  scanf("%f %f",&num[0],&num[1]);
  div = num[0] / num[1];
  printf("%f\n",div);


}
