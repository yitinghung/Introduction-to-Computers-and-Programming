#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int len1, len2, i, carry = 0;
    char *num1, *num2;
    
    scanf("%d", &len1);
    num1 = malloc(len1 * sizeof(char));
    scanf("%s", num1);
    
    scanf("%d", &len2);
    num2 = malloc(len2 * sizeof(char));
    scanf("%s", num2);
    
    int len_max = len1 > len2 ? len1 : len2;
    int *result;
    result = malloc((len_max + 1) * sizeof(int));
    
    for(i = 0; i < len_max || carry > 0; i++){
        result[i] = carry;
        if (len1 > 0){
            result[i] += num1[len1 - 1] - '0';
            len1--;
        }
        if (len2 > 0){
            result[i] += num2[len2 - 1] - '0';
            len2--;
        }
        if (result[i] > 9){
            result[i] %= 10;
            carry = 1;
        }
        else
            carry = 0;
    }
    
    for(i = i - 1; i >=0; i--)
        printf("%d", result[i]);
    printf("\n");
    
    free(num1);
    free(num2);
    free(result);
    
    return 0;
}
