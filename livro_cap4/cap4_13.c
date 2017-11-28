#include <stdio.h>
#include <stdio.h>

/*Faça um programa que receba a idade e o peso de quinze pessoas, e que calcule e mostre as médias dos
pesos das pessoas da mesma faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a
30 anos e de 31 anos para cima.*/

int main(int argc, char const *argv[]) {
    int idade[15];
    float peso[15];
    float faixa[4]={0};
    int cont[4]={0};
    float media[4]={0};

    for (size_t i = 0; i < 15; i++) {
        printf("Pessoa %d (idade e peso)\n",i+1);
        scanf("%d",&idade[i]);
        scanf("%f",&peso[i]);
        if (idade[i]<=10) {
            faixa[0] += peso[i];
            cont[0] ++;
        }else if (idade[i]<=20) {
            faixa[1] += peso[i];
            cont[1] ++;
        }else if(idade[i]<=30){
            faixa[2] += peso[i];
            cont[2] ++;
        }else{
            faixa[3] += peso[i];
            cont[3] ++;
        }
    }

    for (size_t j = 0; j < 4; j++) {
        if (cont[j]==0) {
            media[j]=0;
        }else{
            media[j] = faixa[j]/(double)cont[j];
        }
        switch (j) {
            case 0:printf("media 1 a 10 anos = %.2f\n",media[j] );
            break;
            case 1:printf("media 11 a 20 anos = %.2f\n",media[j] );
            break;
            case 2:printf("media 21 a 30 anos = %.2f\n",media[j] );
            break;
            case 3:printf("media 31 e acima = %.2f\n",media[j] );
            break;
        }

    }
    return 0;
}
