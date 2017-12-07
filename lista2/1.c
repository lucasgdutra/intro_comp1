#include <stdio.h>
#include <stdlib.h>
/*
author: Lucas Gabriel Dutra
Dado o vetor a, com n elementos reais. Determine e escreva o vetor b, tal que:
b[i] = a[i]^2 - 2*a[i] + 1.25 ; para i = 0, 1, 2, ... n-1.
*/

int n;
int main(int argc, char const *argv[]) {
    printf("insira o numero de elementos do vetor\n");
    scanf("%d",&n);
    if(n>0){
        float vetor[2][n];
        for (size_t i = 0; i < n; i++) {
            printf("insira o valor do elemento %d\n",i+1);
            scanf("%f",&vetor[0][i]);
        }
        for (size_t i = 0; i < n; i++) {
            vetor[1][i]= (vetor[0][i] * vetor[0][i]) - (2*vetor[0][i]) + 1.25;
            printf("%f\n",vetor[1][i]);
        }
    }else{
        printf("valor invalido para numero de elementos do vetor");
    }
    return 0;
}
