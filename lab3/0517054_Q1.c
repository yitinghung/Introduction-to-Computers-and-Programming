#include <stdio.h>
int main(){
    float num;
    printf("Input = ");
    scanf("%f", &num);
    
    int num_int;
    num_int = num;
 
    if((num - num_int) >= 0.5)
        printf("Output = %d\n", num_int + 1);
    else
        printf("Output = %d\n", num_int);

    return 0;
}
