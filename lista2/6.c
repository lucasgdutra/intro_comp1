#include <stdio.h>
#include <stdlib.h>
/*
author: Lucas Gabriel Dutra
Dado o vetor x, com n elementos inteiros. Determine e escreva o maior valor, no vetor.
*/
int n;
float maior=0;
int main(int argc, char const *argv[]) {
    printf("insira o numero de elementos do vetor\n");
    scanf("%d",&n);
    if(n>0){
        float vetor[n];
        for (size_t i = 0; i < n; i++) {
            printf("insira o valor do elemento %d\n",i+1);
            scanf("%f",&vetor[i]);
            if (vetor[i]>maior) {
                maior = vetor[i];
            }
        }
        printf("maior = %f\n",maior );
    }else{
        printf("valor invalido para numero de elementos do vetor");
    }
    return 0;
}
