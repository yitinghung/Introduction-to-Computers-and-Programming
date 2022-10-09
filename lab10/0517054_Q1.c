#include <stdio.h>
#include <string.h>

int main(){
    char s[300];
    gets(s);
    
    int i, j, flag = 0;
    int len = strlen(s);
    for (i=0, j=len-1; i<=j; i++, j--){
        if (s[i] == s[j]){
            flag = 0;
        }
        else{
            flag = 1;
            break;
        }
    }
    
    if (flag == 0)
        printf("%c\n", 'Y');
    else if (flag == 1)
        printf("%c\n", 'N');
            
    return 0;
}
