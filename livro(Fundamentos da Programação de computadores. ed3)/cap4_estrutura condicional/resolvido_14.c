#include <stdio.h>
#include <stdlib.h>


int main(){

  //Faça um programa que receba o salário inicial de um funcionário, calcule e mostre o novo salário,
  //acrescido de bonificação e de auxílio escola.


  float sal, novo_sal, boni, aux;
  scanf("%f",&sal);

  if (sal <= 500) {
  boni = sal * (5.0/100);
}else if(sal <= 1200){
  boni = sal * (12.0/100);
}else{
  boni = 0;
}


  if (sal <= 600) {
    aux = 150;
  }else{
    aux = 100;
  }
  novo_sal = sal + boni + aux;
  printf("%f\n",novo_sal);
}
