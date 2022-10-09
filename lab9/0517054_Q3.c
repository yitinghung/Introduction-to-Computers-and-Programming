#include <stdio.h>
#include <string.h>

int main(){
    char str[80];
    char delim[2] = "-";
    char *token;
    
    scanf("%s", str);
    token = strtok(str, delim);
    
    while(token != NULL){
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }
    return 0;
}
