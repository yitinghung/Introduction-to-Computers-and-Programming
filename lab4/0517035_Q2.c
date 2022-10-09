#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, ans, min = 0, max = 99;
	ans = rand() % 100;
	
	while (1){
		printf("Guss: ");
		scanf("%d", &i);
        if (min<i && i<ans){
            min = i;
			printf("Range: %d - %d\n", min, max);
            continue;
        }
        else if (ans<i && i<max){
            max = i;
			printf("Range: %d - %d\n", min, max);
            continue;
        }
        else if (i == ans){
            printf("You got it!\n");
            break;
        }
		
		
	}
	
	
	return 0;
}
