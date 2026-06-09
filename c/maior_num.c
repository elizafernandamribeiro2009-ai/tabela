/*Maior de Três: Peça três números e utilize if/else para imprimir qual é o maior deles.*/

#include <stdio.h>

int main(){
    float num1, num2, num3;
    printf("Entre com o primeiro número:");
    scanf("%f", &num1);
    printf("Entre com o segundo número:");
    scanf("%f", &num2);
    printf("Entre com o terceiro número:");
    scanf("%f", &num3);
    if(num1 > num2 && num1 > num3){
        printf("O primeiro número é o maior entre os três.");
    }
    else if(num2 > num1 && num2 > num3){
        printf("O segundo número é o maior entre os três.");
    }
    else if(num3 > num1 && num3 > num2){
        printf("O terceiro número é o maior entre os três.");
    }
}    