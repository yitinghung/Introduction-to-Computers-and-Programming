#include <stdio.h>
#include<math.h>
int main(){
    char type;
    int input, binary = 0, i = 1;
    
    printf("Choose B, O, or H: ");
    scanf("%c", &type);
    printf("Input the decimal number: ");
    scanf("%d", &input);
    
    if (type == 'B'){
        while(input > 0){
            binary += (input%2)*i;
            input /= 2;
            i *= 10;
        }
        printf("The binary expression of the number is %d\n", binary);
    }
    else if (type == 'O')
        printf("The octal expression of the number is %o\n", input);
    else if (type == 'H')
        printf("The hexadecimal expression of the number is %X\n", input);
    return 0;
}
