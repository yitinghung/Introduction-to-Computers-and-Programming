#include <stdio.h>

int main(){
	int category, height, i, j, space_p, space_d, space_d_1, star_d;
	
	while(1){
        printf("Choose what you want to print out. (1)pyramid (2)diamond (3)exit: ");
        scanf("%d", &category);
        if (category == 3)
            printf("\n");
            break;
        printf("Enter the height you want (4 < height < 10): ");
        scanf("%d", &height);
        
        space_p = height-1;
        space_d = height-2;
        space_d_1 = height-2;
        star_d = 2*height-3;
        
        if (category == 1){
            printf("\n");
            for (i=0 ; i<height ; i++){
                for (j=0 ; j<space_p ; j++){
                    printf(" ");
                }
                for (j=0 ; j<i*2+1 ; j++){
                    printf("*");
                }
                printf("\n");
                space_p--;
            }
            printf("\n");
        }
        
        else if (category == 2){
            printf("\n");
            printf(" ");
            for (i=0;i<(height-2)*2-1;i++){
                printf("*");
            }
                printf("\n");
            
            for (i=0 ; i<height-1 ; i++){
                for (j=space_d_1 ; j<space_d ; j++){
                    printf(" ");
                }
                for (j=star_d ; j>i ; j--){
                    printf("*");
                }
                printf("\n");
                space_d = space_d+2;
                space_d_1++;
                star_d--;
            }
            printf("\n");
        }
        
        
	}
	
	
	
	return 0;
}
