#include <stdio.h>
int main(){
    int shape, height, i, j, k;
    while(1){
        printf("Choose what you want to print out. (1)pyramid (2)diamond (3)exit: ");
        scanf("%d", &shape);
        
   
        if (shape == 1){
            printf("Enter the height you want(4 < height < 10):");
            scanf("%d", &height);
            for(i = 1; i <= height; i++){
                for(j = 1; j <= height - i; j++)
                    printf(" ");
                for(k = 1; k <= 2*i-1; k++)
                    printf("*");
                printf("\n");
            }
        }
        else if (shape == 2){
            printf("Enter the height you want(4 < height < 10):");
            scanf("%d", &height);
            printf(" ");
            for(i = 1; i <= (height-2)*2-1; i++)
                printf("*");
            printf("\n");
            for(i = 1; i < height; i++){
                for(j = 1; j < i; j++)
                    printf(" ");
                for(k = 1; k <= (height-i)*2-1 ; k++)
                    printf("*");
                printf("\n");
            }
        }
        else
            break;
    }
    
    return 0;
}
