#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  /*Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda*/
  float num[2], med;

  scanf("%f %f",&num[0],&num[1]);
  med = ((num[0]*2) + (num[1]*3))/6;
  printf("%f\n",med);


}
