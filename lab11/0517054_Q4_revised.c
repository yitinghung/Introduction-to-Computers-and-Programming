#include <stdio.h>
#include <string.h>

int main(){
    int repeat;
    scanf("%d", &repeat);
    for (int j = 0; j < repeat; j++){
        int num;
        scanf("%d", &num);
        getchar();
        char str[num][100];
        for (int i = 0; i < num; i++)
            gets(str[i]);
    
        char message[100];
        char delim[2] = " ", *token;
        int count = 0;
        
        for (int i = 0; i < num; i++){
            int letter = 0;
            token = strtok(str[i], delim);
            while(token != NULL){
                if (strlen(token) > letter){
                    message[count++] = token[letter++];
                }
                token = strtok(NULL, delim);
            }
            message[count++] = ' ';
        }
        printf("%s\n", message);
    }
    return 0;
}
