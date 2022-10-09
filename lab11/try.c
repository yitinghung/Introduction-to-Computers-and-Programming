#include <stdio.h>
#include <string.h>

int main(){
    int num, repeat;
    char delim[2] = " ";
    char *token;
    scanf("%d", &repeat);
    for(int i = 0; i < repeat; i++){
        scanf("%d", &num);
        getchar();
        char str[num][300];
        char letter[300];
        int count = 0;
        for(int j = 0; j < num; j++){
            gets(str[j]);
            token = strtok(str[j], delim);
            int n = 0;
            while(token != NULL){
                if (strlen(token) > n)
                    letter[count++] = token[n++];
                token = strtok(NULL, delim);
            }
            letter[count++] = ' ';
        }
        printf("%s\n", letter);
    }
    
    return 0;
}

