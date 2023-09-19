#include <stdio.h>

main()
{
    FILE *fp;
    char ch;
    fp = fopen("prog1.c", "r");
    
    while (1)
    {
        ch = fgetc(fp);

        if (ch == EOF)
            break;
            printf("%c \n", ch);
        
        fclose(fp);
        
    }
}