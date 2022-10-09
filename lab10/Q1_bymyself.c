#include<stdio.h>
#include<string.h>
int main(){
    char str[300];
    gets(str);
    int i;
    for (i = 0; i < strlen(str)/2; i++){
        if (str[i] != str[strlen(str) - i - 1])
            break;
    }
    if (i == strlen(str)/2)
        printf("Y\n");
    else
        printf("N\n");
    return 0;
}
