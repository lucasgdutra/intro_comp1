#include <stdio.h>
#include <stdlib.h>
#include "math.h"
/*
author: Lucas Gabriel Dutra
Leia uma matriz a, quadrada de ordem n. Determine e escreva um vetor v, de comprimento n a partir da
diagonal principal de a, tal que: v[i] = a[i, i]^2.
*/
int n, soma;
int main(int argc, char const *argv[]) {
    printf("Qual a ordem da matriz quadrada?\n");
    scanf("%d",&n );
    if (n>0) {
        int matriz[n][n];
        int vetor[n];
        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < n; j++) {
                printf("Insira o valor da linha %d, coluna %d\n",i+1,j+1);
                scanf("%d",&matriz[i][j]);
                if (i==j) {
                    vetor[j] = matriz[i][j] * matriz[i][j];
                }
            }
        }
        printf("vetor = ");
        for (size_t i = 0; i < n; i++) {
            printf("|%d",vetor[i]);
        }
        printf("|\n");
    }
    return 0;
}
