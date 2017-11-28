#include <stdio.h>
#include <stdio.h>

/*Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião
em relação ao filme: ótimo — 3; bom — 2; regular — 1. Faça um programa que receba a idade e a opinião
de quinze espectadores, calcule e mostre:

■■ a quantidade de pessoas que responderam regular; e
■■ a percentagem de pessoas que responderam bom, entre todos os espectadores analisados.
■■ a média das idades das pessoas que responderam ótimo;*/

int main(int argc, char const *argv[]) {
    int idade[15], opniao[15];
    int soma=0;
    int cregular=0, cbom=0, cotimo=0;
    float motimo, pbom;

    for (size_t i = 0; i < 15; i++) {
        printf("espectador %d idade e avaliacao\n",i+1 );
        scanf("%d %d",&idade[i], &opniao[i]);
        switch (opniao[i]) {
            case 1/* regular*/:cregular++;
            break;
            case 2/* bom*/:cbom ++;
            break;
            case 3/* otimo*/:cotimo++;soma += idade[i];
            break;
            default: printf("opçao invalida\n");
        }
    }
    pbom = (cbom/15.0)*100;
    if (cotimo==0) {
        motimo=0;
    }else{
        motimo = (double)soma/(double)cotimo;
    }
    printf("a media das idades das pessoas que responderam otimo eh: %f\n", motimo);
    printf("%d pessoas responderam regular\n", cregular);
    printf("a percentagem de pessoas que responderam bom eh: %f\n", pbom);
    return 0;
}
