#include <stdio.h>
#include <string.h>
int main(){
    int repeat;
    scanf("%d", &repeat);
    for (int k = 0; k < repeat; k++){
        int num;
        scanf("%d", &num);
        getchar();
        char str[num][100];
        for (int i = 0; i < num; i++)
            gets(str[i]);
    
        char message[100] = {'\0'};
        int m = 0;
        for (int j = 0; j < num; j++){
            int count = 0, n = 0;
            for (int i = 0; str[j][i] != '\0'; i++){
                if (str[j][i] == ' '){
                    count = -1;
                }
                if (count == n){
                    message[m++] = str[j][i];
                    n++;
                    while (str[j][i] != ' '){
                        if (str[j][i] == '\0'){
                            i--;
                            break;
                        }
                        i++;
                        count = -1;
                    }
                }
                count++;
            }
            message[m++] = ' ';
        }
    
        message[strlen(message)] = '\0';
        printf("%s\n", message);
    }
        return 0;
}

