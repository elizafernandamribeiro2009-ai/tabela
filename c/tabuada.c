/*Tabuada Dinâmica: Peça um número e use um laço for para imprimir a tabuada de 1 a 10.*/

#include <stdio.h>

int main(){
    int num, i;
    i=1;
    printf("Digite um número interiro para ver a tabuada desse némero:");
    scanf("%d", &num);
    while(i<=10){
        printf("%d x %d = %d \n", num, i, num*i);
        i++;
    }
}