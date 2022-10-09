#include <stdio.h>
int main(){
    char input;
    printf("Input = ");
    scanf("%c", &input);
    
    int ans;
    
    ans = input - 32 + ('A' <= input && input <= 'Z' ) * 64;
    printf("%c\n", ans);
    
    return 0;
}

