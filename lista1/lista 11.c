#include <stdio.h>
#include <stdlib.h>

int main(){
  /*Gere e imprima os valores de  “ x “  e  “ y “, tal que: y = (x²-9)/(x²+2) ;   para  x = 1.5, 2.0, 2.5, ..., 9*/
  float count, y;
  count = 9.0;
  for (float x = 1.5; x <= count; x = x + .5) {
    y = ((x*x)-9)/((x*x)+2);
    printf("x = %.2f y = %f\n",x, y );
  }
}
