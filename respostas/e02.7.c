/*
Escreva um programa que leia o número de questões que um candidato acertou em
uma prova, calcule e exiba o percentual de acertos. Considerando que a prova possuía
50 questões.
*/
# include <stdio.h>
// # define TOTAL 50
int main(){
    const int total =50;
    int acertos;
    float porcentagem;
    // acertos / total * 100
    printf("Digite a quantidade de questões corretas: ");
    scanf("%d", &acertos);
    porcentagem =  (float) acertos / total * 100; //0.0 1.0
    printf("O candidado acerto um total de %.1f %%\n", porcentagem);
    return 0;
}