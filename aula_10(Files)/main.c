#include <stdio.h>

int main(){

    FILE *fp;
    fp = fopen("ler.txt","r");
    int cont;
    char ch;

    if(fp == NULL){

        printf("Unable to open file \n");
        system("pause");
        exit(0);
    }else{
    while (1)
    {
        ch = fgetc(fp);
        if(ch == EOF)
        break;
        printf("%c",ch);
        cont++;

    }
    
    printf("\n");
    fclose(fp);
    printf("Existem no arquivo ler.txt %d espaços, novas linhas, e caracteres em geral. \n",cont);
    }

    return 0;

}