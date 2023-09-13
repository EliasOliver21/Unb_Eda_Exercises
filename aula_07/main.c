#include <stdio.h>

int main(){

    int digit;
    printf("Digite um numero de 1 a 3: \n");
    scanf("%d", &digit);

    switch (digit)
    {
    case 1:

        printf("Você digitou 1.\n");
        break;

    case 2:

        printf("Você digitou 2.\n");
        break;
    case 3:

        printf("Você digitou 3.\n");
        break;
    default:
        printf("Número inválido digite um número de 1 a 3.\n");
        break;
    }
}