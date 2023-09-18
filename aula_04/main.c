#include <stdio.h>

int main()
{

    int idade;
    char nome[15];
    float peso,altura,imc;

    printf("Digite seu nome e idade: \n");
    scanf("%s %d", &nome, &idade);

    if (idade >= 18){
        printf("%s você é maior de idade e ja pode tirar sua cnh.\n", nome);
    }else{
        printf("%s você não é maior de idade, portanto deve esperar completar 18 anos para habilitar-se.\n", nome);
    }

    printf("Digite seu peso e altura:\n");
    scanf("%f %f", &peso, &altura);
    imc =  peso / (altura * altura);
    printf("Seu imc é de: %.4f. \n", imc);

    return 0;

}