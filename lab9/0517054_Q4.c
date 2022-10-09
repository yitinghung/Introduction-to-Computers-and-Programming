#include <stdio.h>
#include <string.h>
#define N 80

int main(){
    char str1[N], str2[N];
    
    scanf("%s", str1);
    scanf("%s", str2);
    printf("%lu\n", strlen(str1));
    printf("%lu\n", strlen(str2));
    
    strcat(str1, str2);
    printf("%s\n", str1);
    printf("%lu\n", strlen(str1));
    
    return 0;
}


