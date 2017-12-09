#include <stdio.h>
#include <stdlib.h>
/*
author: Lucas Gabriel Dutra
Gera uma matriz a, quadrada de ordem n, tal que cada elemento é dado por: se a soma dos índices do
elemento é um número par, o elemento será igual a 1 e se a soma dos índices for ímpar o elemento será igual
a 2. Imprima a matriz gerada.
*/

int n;
int main(int argc, char const *argv[]) {
    printf("Quantas sao as linhas e colunas da matriz 'A'?\n");
    scanf("%d",&n );
    if (n>0) {
        int a[n][n];

        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < n; j++) {
                if ((i+j)%2==0) {
                    a[i][j]=1;
                }else{
                    a[i][j]=2;
                }
            }
        }

        for (size_t i = 0; i < n; i++) {
          for (size_t j = 0; j < n; j++) {
            printf("----");
          }
          printf("-\n");
          for (size_t j = 0; j < n; j++) {
            printf("| %d ",a[i][j]);
          }
          printf("|\n");

        }
    }
    return 0;
}
