#include <stdio.h>
#include <string.h>

int main(){
    char s2[80], s1[80], s3[80];
    scanf("%s", s2);
    strcpy(s1, s2);
    printf("%s\n", s1);
    strncpy(s3, s2, 5);
    printf("%s\n", s3);
    
    return 0;
}
