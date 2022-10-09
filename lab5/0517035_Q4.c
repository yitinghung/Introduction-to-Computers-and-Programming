#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char filename[20], ch;
    printf("Enter your filename: ");
    scanf("%s", filename);
    printf("\n");
    
    FILE *text;
    text = fopen(filename, "r");
    while ((ch=fgetc(text))!=EOF){
        printf("%c", ch);
    }
    
    fclose(text);
    printf("\n");
    return 0;
}

