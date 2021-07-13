#include <stdio.h>
int main(){
    char nome[50]; //texto
    puts("Digite seu nome com até 50 caracteres:"); //saída
    gets(nome); //entrada
    printf("Seu nome: %s \n",nome); //saída
    return 0;
}