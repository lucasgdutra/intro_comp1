#include <stdio.h>
#include <stdlib.h>
/*
author: Lucas Gabriel Dutra
Leia uma matriz a do tipo nxm, uma matriz b do tipo mxp. Determine e escreva a matriz produto c = axb
*/
int n,m,p;
int main(int argc, char const *argv[]) {
  printf("Quantas sao as linhas da matriz 'A'?\n");
  scanf("%d",&n );
  printf("Quantas sao as colunas da matriz 'A' e linhas da matriz B?\n");
  scanf("%d",&m );
  printf("Quantas sao as colunas da matriz 'B'?\n");
  scanf("%d",&p );
  if (n>0 && m>0 && p>0) {
    float a[n][m];
    float b[m][p];
    float c[n][p];
    //matriz A
    for (size_t i = 0; i < n; i++) {
      for (size_t j = 0; j < m; j++) {
        printf("Insira o valor da matriz A, linha %d, coluna %d\n",i+1,j+1);
        scanf("%f",&a[i][j]);
      }
    }

    //matriz B
    for (size_t i = 0; i < m; i++) {
      for (size_t j = 0; j < p; j++) {
        printf("Insira o valor da matriz B, linha %d, coluna %d\n",i+1,j+1);
        scanf("%f",&b[i][j]);
      }
    }

    //multiplicao
    for (size_t i = 0; i < n; i++) {
      for (size_t j = 0; j < p; j++) {
        c[i][j] = 0;
        for (size_t l = 0; l < m; l++) {
          c[i][j] += a[i][l]*b[l][j];
          printf("%f\n",a[i][l]);
          printf("%f\n",b[l][j]);
          printf("%f\n",c[i][j]);
        }
      }
    }



    for (size_t i = 0; i < n; i++) {
      for (size_t j = 0; j < p; j++) {
        printf("--------");
      }
      printf("-\n");
      for (size_t j = 0; j < p; j++) {
        printf("|%7.2f",c[i][j]);
      }
      printf("|\n");

    }

  }
  return 0;
}
