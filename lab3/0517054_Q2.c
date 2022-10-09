#include <stdio.h>
int main(){
    char input;
    printf("Input = ");
    scanf("%c", &input);
    
    int input_num;
    input_num = input;
    
    if (65 <= input_num && input_num <= 90 )
        printf("Output = %c\n", input_num + 32);
    else if (97 <= input_num && input_num <= 122)
        printf("Output = %c\n", input_num - 32);
    else
        printf("Your input is not an english character!\n");
    

    return 0;
}
