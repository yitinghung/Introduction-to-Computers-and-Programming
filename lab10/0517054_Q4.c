#include<stdio.h>
#include<string.h>
int main(){
    char s[257], result[257], change[257], replaced[257];
    int count=0;
    gets(s);
    gets(replaced);
    gets(change);
    for(int i=0 ; s[i] !='\0' ; i++){
        if(strstr(&s[i],replaced) == &s[i]){
            strncat(result, change, strlen(change));
            i+=strlen(replaced)-1;
            count+=strlen(change);
        }
        else{
            strncat(result, &s[i], 1);
            count++;
        }
    }
    result[count] = '\0';
    printf("%s\n",result);
    return 0;
}
