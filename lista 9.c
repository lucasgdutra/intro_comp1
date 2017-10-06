#include <stdio.h>
#include <stdlib.h>

int main(){
  /*Gere e imprima os valores de  “ i ”  e  “ y ”, tal que: y = 3i;   para  i = 1, 2, 3, 4, ... , 10.   */
  int count;
  count = 10;
  for (size_t i = 1; i <= count; i++) {
    printf("i = %d y = %d\n",i, 3*i );
  }
}
