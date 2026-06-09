#include <stdio.h>

int main(){
    int num, cont = 0, soma = 0, i = 1;
    while (i <= 30){
        printf("digite um numero inteiro:");
        scanf("%d", &num);
        if (num >= 20 && num <= 300){
            cont = cont + 1;

        }
        if(num > 0){
            soma = soma + num;
        }
        i ++;
    }
    printf("a quantidade de números contidos no intervalo de 20 e 300 é igual á %d.\n", cont);
    printf("a soma dos numeros positivos é igual á %d.\n", soma);
}