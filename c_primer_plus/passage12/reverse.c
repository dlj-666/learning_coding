#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    long count, num;
    if (argc < 2)
    {
        printf("Please input 2 arguments\n");
        exit(1);
    }
    if ((fp = fopen(argv[1], "r+")) == NULL)
    {
        printf("no such file\n");
        exit(1);
    } 
    fseek(fp, 0L, SEEK_END);
    num = ftell(fp);
    for (count = 2; count <= num;count++)
    {
        fseek(fp, -count, SEEK_END);
        ch = getc(fp);
        putc(ch, stdout);
    }
    printf("\n");
    fclose(fp);
    return 0;
    }
