#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  /*Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%*/
  float num, new;

  scanf("%f",&num);
  new = num * 0.9;
  printf("%.2f\n",new);


}
