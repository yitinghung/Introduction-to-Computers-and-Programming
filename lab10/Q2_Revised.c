#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[300], num[100];
    int i, j ,sum = 0;
    
    for (j = 0; j < 3; j++){
        gets(str);
        int count = 0, intnum = 0;
        for (i = 0; i < strlen(str); i++){
            if (str[i] >= '0' && str[i] <= '9')
                intnum = intnum * 10 + str[i] - '0';
        }
        sum += intnum;
    }
    printf("%d\n", sum);
    return 0;
}
