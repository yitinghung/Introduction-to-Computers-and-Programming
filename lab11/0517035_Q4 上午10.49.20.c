#include<stdio.h>
#include<string.h>


int main(){
    int n, row, i, j, count, letter;
    char str[300], *token, result[300];
    char tmp;
    scanf("%d", &n);
    while(n--){
        count = 0;
        scanf("%d", &row);
        for (i=0;i<row;i++){
            //printf("hello");
            scanf("%[\n]", &tmp);
            scanf("%[^\n]",str);
            //printf("%s",str);
            
            token = strtok(str, " ");
            letter = 0;
            while( token != NULL ) {
                if (strlen(token)>=letter+1){
                    result[count] = token[letter];
                    count++;
                    letter++;
                }
                
                token = strtok(NULL, " ");
            }
            result[count] = ' ';
            count++;
            //printf("%s\n", result);
        }
        printf("%s\n", result);
    }
    
    
	return 0;
}

