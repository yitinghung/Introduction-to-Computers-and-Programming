#include <stdio.h>
#define MAX 80

void Prefix(char *infix, char *prefix);
int Priority(char);
int len(char a[MAX]);

int main(){
    char infix[MAX] = {'0'};
    char prefix[MAX] = {'0'};
    
    scanf("%s", infix);
    Prefix(infix, prefix);
    
    for (int i = len(prefix) - 1; i >= 0; i--)
        printf("%c", prefix[i]);
    printf("\n");
    
    return 0;
}

int len(char a[MAX]){
    int len = 0, i = 0;
    while (a[i++] != 0)
        len += 1;
    return len;
}

void Prefix(char *infix, char *prefix){
    char stack[MAX] = {0};
    int i = 0, j = 0, top = 0;
    
    for (i = len(infix) - 1, j = 0, top = 0; infix[i] != 0; i--){
        switch (infix[i]){
            case '+': case '-': case '*': case '/':
                while(Priority(stack[top - 1]) > Priority(infix[i])){
                    prefix[j++] = stack[top - 1];
                    top--;
                }
                stack[top++] = infix[i];
                break;
            default:
                prefix[j++] = infix[i];
        }
    }
    while(top > 0){
        prefix[j++] = stack[(top--)-1];
    }
    
}

int Priority(char input){
    switch (input){
        case '+': case '-': return 1;
        case '*': case '/': return 2;
        default :           return 0;
    }
}


