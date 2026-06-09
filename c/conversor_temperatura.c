#include <stdio.h>

int main(){
    float tempc, tempf;
    printf("Digite a temperatura em graus celsius:");
    scanf("%f", &tempc);
    tempf = tempc * 1.8 + 32;
    printf("temperatura em fahrenheit igual á %f", tempf);
}
