#include <stdio.h>

int main(){
    int primeiro;
    int segundo;
    int soma;
    printf("digite o primeiro número: ");
    scanf("%d", &primeiro);
    printf("digite o segundo número: ");
    scanf("%d", &segundo);
    soma = primeiro + segundo;
    printf("O valor da soma foi: (%d+%d=%d) \n",primeiro,segundo, soma);
    return 0;
}