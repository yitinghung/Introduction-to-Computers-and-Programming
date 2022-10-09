#include <stdio.h>
int main(){
    int i, j;
    int matrix[3][3] = {0};
    for(i = 0; j < 3; i++){
        for (j = 0; j < 3; j++){
            if (i == (j + 1)) matrix[i][j] = 1;
        }
    }
    for(i = 0; j < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", matrix[2][1]);
        }
    }
    printf("\n");
    
    return 0;
}
