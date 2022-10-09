#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char a[1000010], b[1000010];
    gets(a);
    int len = strlen(a);
    
    if (a[0] == '-'){
        int num = 1;
        b[0] = '-';
        for (int i = len - 1; i > 0; i--){
            b[num++] = a[i];
        }
        b[num] = '\0';
        
        int inta = atoi(a), intb = atoi(b);
        printf("%d\n", inta + intb);
    }
    else{
        int num = 0;
        for (int i = len - 1; i >= 0; i--){
            b[num++] = a[i];
        }
        b[num] = '\0';
    
        int inta = atoi(a), intb = atoi(b);
        printf("%d\n", inta + intb);
    }
    return 0;
}
