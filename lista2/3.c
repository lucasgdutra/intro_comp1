#include <stdio.h>
#include <stdlib.h>
/*
author: Lucas Gabriel Dutra
Dado o vetor a, com n elementos reais. Determine e escreva a soma de todos os elementos positivos do
vetor.
*/
int n;
float soma;
int main(int argc, char const *argv[]) {
    printf("insira o numero de elementos do vetor\n");
    scanf("%d",&n);
    if(n>0){
        float vetor[n];
        for (size_t i = 0; i < n; i++) {
            printf("insira o valor do elemento %d\n",i+1);
            scanf("%f",&vetor[i]);
            if (vetor[i]>0) {
                soma += vetor[i];
            }
        }
        printf("soma = %f\n",soma );
    }else{
        printf("valor invalido para numero de elementos do vetor");
    }
    return 0;
}
