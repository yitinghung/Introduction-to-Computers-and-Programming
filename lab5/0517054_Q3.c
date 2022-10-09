#include <stdio.h>
int main(){
    int a[20], i, len = 20, j, temp;
    printf("Input: ");
    for (i = 0; i < 20; i++)
        scanf("%d", &a[i]);
    for (i = 0; i <= len - 1; i++){
        for (j = i + 1; j <= len - 1; j++)
            if (a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    }
    printf("Output: ");
    for (i = 0; i < 20; i++)
        printf("%d ", a[i]);
    printf("\n");
        
    
    return 0;
}
