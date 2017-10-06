#include <stdio.h>
#include <stdlib.h>

int main(){
  /*Gere e imprima (uma tabela com) os valores de  “ i “  e  “ k “, tal que:   k + i^2  + 2i  + 2 ;   para  i = 0, 1, 2,..., 20 */
  int count, k;
  count = 20;
  printf("|----------------|\n");
  for (size_t i = 1; i <= count; i++) {
    k = (i*i) + (2*i) + 2;
    printf("|i = %02d | k = %03d|\n",i, k );
  }
  printf("|----------------|\n");

}
