#include <stdio.h>
#include <stdlib.h>


int main(){

  //Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu dois
  //cheques e agora deseja saber seu saldo atual. Sabe-se que cada operação bancária de retirada paga
  //CPMF de 0,38% e o saldo inicial da conta está zerado.

float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;
  scanf("%f",&salario);
  scanf("%f",&cheque1);
  scanf("%f",&cheque2);
  cpmf1 = cheque1 * (0.38 / 100);
  cpmf2 = cheque2 * (0.38 / 100);
  saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;
  printf("%f\n",saldo);
}
