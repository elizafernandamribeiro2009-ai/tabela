/*Média de Notas com Vetor: Armazene 5 notas em um array, calcule a média e mostre 
quais notas ficaram acima da média da turma.*/

 #include <stdio.h>

 int main(){
    float notas[5];
    float media;
    printf("Digite a nota do primeiro aluno:");
    scanf("%f", &notas[0]);
    printf("Digite a nota do segundo aluno:");
    scanf("%f", &notas[1]);
    printf("Digite a nota do terceiro aluno:");
    scanf("%f", &notas[2]);
    printf("Digite a nota do quarto aluno:");
    scanf("%f", &notas[3]);
    printf("Digite a nota do quinto aluno:");
    scanf("%f", &notas[4]);
    media = (notas[0]+notas[1]+notas[2]+notas[3]+notas[4])/5;
    printf("A média da turma é: %.2f\n", media);
    if(notas[0]>media){
        printf("O aluno 1 teve sua nota acima da média da turma. \n");
    }
     if(notas[1]>media){
        printf("O aluno 2 teve sua nota acima da média da turma. \n");
    }
     if(notas[2]>media){
        printf("O aluno 3 teve sua nota acima da média da turma. \n");
    }
     if(notas[3]>media){
        printf("O aluno 4 teve sua nota acima da média da turma. \n");
    }
     if(notas[4]>media){
        printf("O aluno 5 teve sua nota acima da média da turma. \n");
    }
    return 0;
 }