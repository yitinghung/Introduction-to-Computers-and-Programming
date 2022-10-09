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
            for (int j = 0; j < strlen(change); j++)
                result[num++] = change[j];
            i += strlen(replaced) - 1;
        }
        else{
            result[num++] = s[i];
        }
    }
    result[num] = '\0';
    printf("%s\n", result);
    return 0;
}
