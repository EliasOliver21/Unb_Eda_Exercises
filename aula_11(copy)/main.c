#include <stdio.h>

int main()
{

    FILE *fp;
    FILE *fp2;
    fp = fopen("ler.txt", "r");
    char ch;

    if (fp == NULL)
    {

        printf("Unable to open file \n");
        system("pause");
        exit(0);
    }
    else
    {
        fp2 = fopen("escrever.txt", "w");
        while (1)
        {
            ch = fgetc(fp);
            if (ch == EOF)
                break;
            fputc(ch, fp2);
        }
    }
    fclose(fp);
    fclose(fp2);
}