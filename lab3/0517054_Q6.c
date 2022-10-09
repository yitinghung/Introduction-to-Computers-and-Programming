#include <stdio.h>
int main(){
    int num, i;
    printf("Input the number of students: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++){
        printf("%d!\n", i);
    }
    return 0;
}
