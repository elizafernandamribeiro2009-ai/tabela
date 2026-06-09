#include <stdio.h>

int main(){
    float num1, num2, resultado;
    char operador;
    printf("digite o primero número:");
    scanf("%f", &num1);
    printf("dgite o operador:");
    scanf(" %c", &operador);
    printf("digite o segundo número:");
    scanf("%f", &num2);
    if (operador == '+'){
        resultado = num1 + num2;
        printf("o resultado da soma é igual á %f", resultado);
    }
    if (operador == '-'){
        resultado = num1 - num2;
        printf("o resultado da subtração é igual á %f", resultado);
    }
    if (operador =='*'){
        resultado = num1 * num2;
        printf("o resultado da multiplicação é igual á %f", resultado);
    }
    if (operador == '/'){
        resultado = num1 / num2;
        printf("o resultado da divisão é igual á %f", resultado);
    }
    return 0;
}