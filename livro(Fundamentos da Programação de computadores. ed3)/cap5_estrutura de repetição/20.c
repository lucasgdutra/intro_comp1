#include <stdio.h>
#include <stdlib.h>


/*Faça um programa que apresente o menu de opções a seguir:
Menu de opções:
1. Média aritmética
2. Média ponderada
3. Sair
Digite a opção desejada.
Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
Na opção 3: sair do programa.*/

void aritmetica(){
    float notas[2];
    float media, soma=0;
    for (size_t i = 0; i < 2; i++) {
        printf("nota %d\n",i+1 );
        scanf("%f",&notas[i] );
        soma += notas[i];
    }
    media = soma/2.0;
    printf("media aritmetica = %f\n",media);
}
void ponderada(){
    float notas[3];
    float pesos[3];
    float media, soman=0, somap=0;
    for (size_t i = 0; i < 3; i++) {
        printf("nota e peso %d\n",i+1 );
        scanf("%f %f",&notas[i], &pesos[i]);
        soman += notas[i]*pesos[i];
        somap += pesos[i];
    }
    media= soman/somap;
    printf("media ponderada = %f\n",media);
}
int main(int argc, char const *argv[]) {
    int opcao;
    printf("Menu de opcoes:\n");
    printf("1. Media aritmetica\n");
    printf("2. Media ponderada\n");
    printf("3. Sair\n");
    printf("Digite a opcao desejada.\n");
    scanf("%d",&opcao);
    switch (opcao) {
        case 1/* value */:aritmetica();
        break;
        case 2/* value */:ponderada();
        break;
        case 3/* value */:return 0;
        break;
        default: printf("opcao invalida\n");
        break;
    }
    return 0;
}
