/*
Escreva um programa que leia dois valores inteiros A e B, realizar a troca dos valores e
imprimir o resultado após a troca.
*/
#include <stdio.h>
int main(){
    int primeiro, segundo;
    int terceiro;
    printf("Digite o primeiro número: "); //1
    scanf("%d", &primeiro);
    printf("Digite o segundo número: "); //2
    scanf("%d", &segundo);

    terceiro = primeiro;   //terceiro -> 1
    primeiro = segundo;    //primeiro -> 2
    segundo = terceiro;    //segundo  -> 1
    printf("O valor de primeiro número: %d e o segundo: %d \n", primeiro, segundo);
    return 0;
}