#include <stdio.h>
#include <stdlib.h>
/*
author: Lucas Gabriel Dutra
Leia um conjunto y, com n valores reais, e no final imprima: as quantidades de valores positivos, negativos
e nulos.
*/
int n;
int positivos=0, negativos=0, nulos=0;
int main(int argc, char const *argv[]) {
    printf("insira o numero de elementos do vetor\n");
    scanf("%d",&n);
    if(n>0){
        float vetor[n];
        for (size_t i = 0; i < n; i++) {
            printf("insira o valor do elemento %d\n",i+1);
            scanf("%f",&vetor[i]);
            if (vetor[i]>0) {
                positivos ++;
            }else if(vetor[i]==0){
                nulos ++;
            }else{
                negativos ++;
            }
        }
        printf("positivos = %d\n",positivos );
        printf("negativos = %d\n",negativos );
        printf("nulos = %d\n",nulos );
    }else{
        printf("valor invalido para numero de elementos do vetor");
    }
    return 0;
}
