#include <stdio.h>

main()
{

    FILE *fp;
    FILE *fp2;
    char ch;
    fp = fopen("ler.txt", "r");

    if (fp == NULL)
    {

        printf("File is null");
        system("pause");
        exit(0);
    }
    else
    {
        fp2 = fopen("escrever.txt", "a");

        while (1)
        {

            ch = fgetc(fp);
            if (ch == EOF)
                break;
                fputc(ch, fp2);
                
        }
        fclose(fp);
        fclose(fp2);
    }
}