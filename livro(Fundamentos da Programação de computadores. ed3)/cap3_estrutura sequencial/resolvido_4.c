#include <stdio.h>
#include <stdlib.h>


int main(){

  //Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se
  //que este sofreu um aumento de 25%.

float sal, novo;
scanf("%f",&sal);
novo =  sal + (sal * 25/100);
printf("%f\n", novo);

}
