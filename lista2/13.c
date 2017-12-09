#include <stdio.h>
#include <stdlib.h>
/*
author: Lucas Gabriel Dutra
Leia uma matriz a, quadrada de ordem n. Teste cada elemento da matriz a, gerando e imprimindo uma nova
matriz b da seguinte forma:
· se o elemento da matriz testada for positivo, o respectivo elemento da nova matriz deverá ser +1.
· se o elemento da matriz testada for nulo, o respectivo elemento da nova matriz deverá ser 0.
· se o elemento da matriz testada for negativo, o respectivo elemento da nova matriz deverá ser -1.
*/

int n;
int main(int argc, char const *argv[]) {
  printf("Quantas sao as linhas e colunas da matriz 'A'?\n");
  scanf("%d",&n );
  if (n>0) {
    float a[n][n];
    float b[n][n];

    //matriz A
    for (size_t i = 0; i < n; i++) {
      for (size_t j = 0; j < n; j++) {
        printf("Insira o valor da matriz A, linha %d, coluna %d\n",i+1,j+1);
        scanf("%f",&a[i][j]);
        if (a[i][j]>0) {
            b[i][j]=1;
        }else if (a[i][j]==0) {
            b[i][j]=0;
        }else if (a[i][j]<0) {
            b[i][j]=-1;
        }else{
            printf("valor inválido\n");
        }
      }
    }


    for (size_t i = 0; i < n; i++) {
      for (size_t j = 0; j < n; j++) {
        printf("--------");
      }
      printf("-\n");
      for (size_t j = 0; j < n; j++) {
        printf("|%7.2f",b[i][j]);
      }
      printf("|\n");

    }

  }
  return 0;
}
