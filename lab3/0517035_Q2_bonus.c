#include <stdio.h>

int main(){
    char input, output;
    printf("Input = ");
    scanf("%c", &input);
    
    output = input + 32*(input <= 'Z') - 32*(input >= 'a');
    printf("Output = %c\n", output);
    
    return 0;
}
