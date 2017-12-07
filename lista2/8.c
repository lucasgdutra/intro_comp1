#include <stdio.h>
#include <stdlib.h>
/*
author: Lucas Gabriel Dutra
Leia uma matriz quadrada de ordem n, de elementos inteiros. Calcule e imprima a soma dos elementos da
diagonal principal da matriz.
*/
int n, soma;
int main(int argc, char const *argv[]) {
    printf("Qual a ordem da matriz quadrada?\n");
    scanf("%d",&n );
    if (n>0) {
        int matriz[n][n];
        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < n; j++) {
                printf("Insira o valor da linha %d, coluna %d\n",i+1,j+1);
                scanf("%d",&matriz[i][j]);
                if (i==j) {
                    soma += matriz[i][j];
                }
            }
        }
        printf("soma da diagonal principal = %d\n",soma);
    }
    return 0;
}
