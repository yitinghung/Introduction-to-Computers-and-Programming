#include <stdio.h>
#include <string.h>

int To_int(char num[]){
    int int_num = 0;
    if (num[0] == '-'){
        for (int i = 1; i < strlen(num); i++)
            int_num = int_num * 10 + num[i] - '0';
        return int_num * (-1);
    }
    
    else{
        for (int i = 0; i < strlen(num); i++)
            int_num = int_num * 10 + num[i] - '0';
        return int_num;
    }
}

int main(){
    char num[10], mun[10];
    int count = 0;
    scanf("%s", num);
    if (num[0] == '-'){
        mun[0] = '-';
        for (int i = strlen(num) - 1; i > 0; i--)
            mun[++count] = num[i];
    }
    else
        for (int i = strlen(num) - 1; i >= 0; i--)
            mun[count++] = num[i];
    
    printf("%d\n", To_int(num) + To_int(mun));
    return 0;
}
