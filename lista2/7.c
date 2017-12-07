#include <stdio.h>
#include <stdlib.h>
/*
author: Lucas Gabriel Dutra
Dado o vetor a, com n elementos reais. Determine e escreva o maior elemento e a média aritmética dos
elementos positivos do vetor.
*/
int n, cont=0;
float maior=0, soma=0, media=0;
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
            if (vetor[i]>0) {
                soma += vetor[i];
                cont++;
            }
        }
        media=soma/cont;
        printf("maior = %f\n",maior );
        printf("media = %f\n",media );
    }else{
        printf("valor invalido para numero de elementos do vetor");
    }
    return 0;
}
