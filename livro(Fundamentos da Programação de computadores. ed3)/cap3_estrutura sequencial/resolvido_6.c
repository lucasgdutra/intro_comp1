#include <stdio.h>
#include <stdlib.h>


int main(){

  //Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
  //sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também
  //sobre o salário base.

float sal, salreceber, grat, imp;
  scanf("%f",&sal );
  grat = sal * (5.0/100);
  imp = sal * (7.0/100);
  salreceber = sal + grat - imp;
  printf("%f\n",salreceber);
}
