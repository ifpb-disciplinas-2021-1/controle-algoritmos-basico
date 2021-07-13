#include <stdio.h>

int main(){
    char letra;
    printf("Digite uma letra: ");
    // scanf("%c", &letra);
    gets(&letra);
    printf("A letra digitada: %c, é muito bonita",letra);
    return 0;
}