#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Toint(char a[]){
    char num[300];
    int len = strlen(a);
    for (int i=0, j=0; i<len; i++){
        if (a[i]>='0' && a[i]<='9'){
            num[j++] = a[i];
        }
        num[j] = '\0';
    }
    int intnum = atoi(num);
    return intnum;
}

int main(){
    char a[300];
    char b[300];
    char c[300];
    gets(a);
    gets(b);
    gets(c);
    printf("%d\n", Toint(a)+Toint(b)+Toint(c));
    return 0;
}
