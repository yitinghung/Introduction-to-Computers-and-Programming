#include <stdio.h>
int main(){
    float num;
    printf("Input = ");
    scanf("%f", &num);
    num = num + 0.5;
    int num_int;
    num_int = num;
    
    printf("%d\n", num_int);
    
    return 0;
}
