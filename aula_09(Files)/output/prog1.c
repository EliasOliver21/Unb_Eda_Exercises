#include <stdio.h>

main()
{
    FILE *fp;
    char ch;
    fp = fopen("main", "r");
    
    while (1)
    {
        ch = fgetc(fp);

        
        if (ch == EOF)
            break;
        printf("%c", ch);
               
        
    }
    printf("\n");
    fclose(fp);
}