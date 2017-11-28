#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  /*Faça um programa que receba três números, calcule e mostre a multiplicação desses números. */
  float num[3], mult;

  scanf("%f %f %f",&num[0],&num[1], &num[2]);
  mult = num[0] * num[1] * num[2];
  printf("%f\n",mult);


}
