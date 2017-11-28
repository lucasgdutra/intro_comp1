#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  /*Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final*/
  float sal, vendas, com, fim;

  scanf("%f %f",&sal, &vendas);
  com = vendas * 0.04;
  fim = sal + com;
  printf("%.2f\n",fim);


}
