#include <stdio.h>
#include <string.h>
int main(){
    char s[257], replaced[257], change[257], result[257];
    gets(s);
    gets(replaced);
    gets(change);
    int num = 0;
    for (int i = 0; i < strlen(s); i++){
        if (strstr(s, replaced) == &s[i]){
            strncat(result, change, strlen(change));
            i += strlen(replaced) - 1;
            num += strlen(change);
        }
        else{
            result[num++] = s[i];
        }
    }
    result[num] = '\0';
    printf("%s\n", result);
    return 0;
}
