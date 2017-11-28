#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  /*Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas*/
  float kilos, gramas;

  scanf("%f",&kilos);

  gramas = kilos * 1000;
  printf("peso em gramas:%f\n",gramas);


}
