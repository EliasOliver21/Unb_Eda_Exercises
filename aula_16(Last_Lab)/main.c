#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    FILE *fp;
    fp = fopen("/home/elias/Unb/Unb_Eda_Exercises/aula_16(Last_Lab)/municipios.txt", "rt");

    int num_linhas = 0;
    char linhas[1000][200];

    // fgets(linha, 100, fp);

    // printf("%s",linha);

    // char ibge[25][100];

    while (fgets(linhas[num_linhas], 100, fp) != NULL && num_linhas < 200) {
        linhas[num_linhas][strcspn(linhas[num_linhas], "\n")] = '\0'; // Remove o caractere de nova linha, se presente
        num_linhas++;
    }

    for(int i =0;i<200;i++){

        printf("Linha %d: %s \n",i+1,linhas[i]);
    }

}