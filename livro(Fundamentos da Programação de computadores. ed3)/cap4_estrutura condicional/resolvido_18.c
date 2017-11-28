#include <stdio.h>
#include <stdlib.h>


int main(){

  //Dados três valores X, Y e Z, verifique se eles podem ser os comprimentos dos lados de um triângulo
  //e, se forem, verifique se é um triângulo equilátero, isósceles ou escaleno. Se eles não formarem um
  //triângulo, escreva uma mensagem. Considere que:
  //*o comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados;
  //*chama-se equilátero o triângulo que tem três lados iguais;
  //*denomina-se isósceles o triângulo que tem o comprimento de dois lados iguais;
  //*recebe o nome de escaleno o triângulo que tem os três lados diferentes.
  float x, y, z;
  scanf("%f %f %f",&x,&y,&z);
  if (x < (y + z) && y < (x + z) && z < (x + y)) {
    if (x == y && y == z) {
      printf("Triangulo Equilatero");
    }else if (x == y || x == z || y == z) {
      printf("Triangulo Isosceles");
    }else if (x != y && x != z && y != z) {
      printf("Triangulo Escaleno");    }
    }else{
      printf("Essas medidas nao formam um triangulo");
    }
  }
