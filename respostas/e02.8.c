/*
Escreva um programa que leia um valor em real e apresente o mesmo em dólar.
Considerando que a cotação de 1 dólar = 5,44 R$.
*/
#include <stdio.h>
int main(){
    const float TAXA = 5.2;
    float real, dolar;
    printf("Digite o valor em reais: ");
    scanf("%f", &real);
    dolar = real / TAXA;
    printf("O valor em dólares é: %.2f\n", dolar);
    return 0;
}