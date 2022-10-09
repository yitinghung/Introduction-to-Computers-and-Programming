#include <stdio.h>
int main(){
    int input, a, times = 1;
    while (1){
        printf("Input: ");
        scanf("%d", &input);
    
        if (2 <= input && input <= 10000){
            printf("%d = ",input);
            for (int i = 2; i <= input; i++){
            
                if (input % i == 0){
                    printf("%d", i);
                    input /= i;

                    while ( input % i == 0 ){
                        times += 1;
                        input /= i;
                    }
                    if (times > 1)
                        printf("^%d", times);
                    times = 1;
               
                    if (input > 1)
                        printf(" * ");
                    else
                        break;
                }
            }
            printf("\n");
        }
        else if (input == 0)
            break;
        else
            printf("Out of range.\n");
        
    }
    return 0;
}
