#include <stdio.h>
#include <stdio.h>

int par(int num){
    if (num%2 == 0) {
        return  1;
    }else{
        return 0;
    }
}
int primo(int num){
    if (num == 1) {
        return 1;    }
        int comparador;
        comparador = num - 1;
        for (; comparador > 1; comparador--) {
            if (num % comparador == 0) {
                return 0;
                break;
            }
        }
        return 1;
    }
    int main(){
        //Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos números primos.
        int num[10], primos=0, pares=0;
        for (size_t i = 0; i < 10; i++) {
            scanf("%d",&num[i] );
            if(par(num[i])==1){
                pares += num[i];
            }
            if(primo(num[i])==1){
                primos += num[i];
            }
        }
        printf("pares = %d, primos = %d\n",pares, primos );
        return 0;
    }
