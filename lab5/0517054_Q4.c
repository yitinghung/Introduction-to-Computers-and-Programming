#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char fn[20], ch;
    printf("Enter your filename: ");
    scanf("%s", fn);
    printf("\n");

    FILE *fin;
    fin = fopen(fn, "r");

    while((ch = fgetc(fin)) != EOF) {
        printf("%c", ch);
    }
    
    fclose(fin);
    printf("\n");
    return 0;
}
