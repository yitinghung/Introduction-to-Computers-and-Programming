#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_file(char fn[])
{
    char ch;
    FILE *fin;
    fin = fopen(fn, "r");
    while ((ch = fgetc(fin)) != EOF)
        printf("%c", ch);
    fclose(fin);
    printf("\n");
}

int main(void)
{
    char fn[20];
    printf("Enter your filename: ");
    scanf("%s", fn);
    printf("\n");
    read_file(fn);
    
    return 0;
}
