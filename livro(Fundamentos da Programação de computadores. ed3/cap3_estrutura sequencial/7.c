#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  /*Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado*/
  float peso, gordo, magro;

  scanf("%f",&peso);
  gordo = peso * 1.15;
  magro = peso * 0.8;
  printf("%f\n",gordo);
  printf("%f\n",magro);

}
