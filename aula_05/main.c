#include <stdio.h>

int main(){

    int materias;
    float media;

    printf("Digite a quantidade de matérias do colegial que você considera mais gostava, e sua média geral: \n");
    scanf("%d %f", &materias, &media);

    if (materias >= 3 && media>= 6 ){

        printf("Parabéns!!Você é um aluno muito aplicado.\n");
    }else{

        printf("Você poderia ser melhor.\n");

    }

    return 0;
}