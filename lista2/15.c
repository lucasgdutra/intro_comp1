#include <stdio.h>
#include <stdlib.h>
/*
author: Lucas Gabriel Dutra
Leia uma matriz quadrada a, de ordem n, de números reais. Dividir os elementos de todas as linhas da
matriz a pelo elemento da diagonal principal, da própria linha. Imprima a matriz a assim modificada.
*/
int n;
int main(int argc, char const *argv[]) {
    printf("Quantas sao as linhas e colunas da matriz 'A'?\n");
    scanf("%d",&n );
    if (n>0) {
        float a[n][n];
        float b[n][n];

        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < n; j++) {
                printf("Digite o elemento da linha %d, coluna %d\n",i+1,j+1);
                scanf("%f",&a[i][j]);
            }
        }

        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < n; j++) {
                b[i][j] = a[i][j] / a[i][i];
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
