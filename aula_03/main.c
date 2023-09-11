#include <stdio.h>

int main()
{

    int idade = 0;
    char nome[15] = "";

    printf("Digite seu nome e sua idade: \n");
    scanf("%s %d", &nome, &idade);
    printf("%s Você tem %d anos \n",nome, idade);
}