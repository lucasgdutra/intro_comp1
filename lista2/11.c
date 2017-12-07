#include <stdio.h>
#include <stdlib.h>
/*
author: Lucas Gabriel Dutra
Leia uma matriz a, nxm. Determine e escreva a matriz b, mxn, onde b é a matriz transposta de a.
*/
int n,m;
int main(int argc, char const *argv[]) {
    printf("Quantas sao as linhas da matriz?\n");
    scanf("%d",&m );
    printf("Quantas sao as colunas da matriz?\n");
    scanf("%d",&n );
    if (n>0 && m>0) {
        float a[m][n];
        float b[n][m];
        for (size_t i = 0; i < m; i++) {
            for (size_t j = 0; j < n; j++) {
                printf("Insira o valor da linha %d, coluna %d\n",i+1,j+1);
                scanf("%f",&a[i][j]);
                b[j][i]=a[i][j];
            }
        }
        for (size_t i = 0; i < m; i++) {
            printf("------------------------------\n");
            for (size_t j = 0; j < n; j++) {
                printf("|%f",b[i][j]);
            }
            printf("|\n");

        }
        printf("------------------------------\n");
    }
    return 0;
}
