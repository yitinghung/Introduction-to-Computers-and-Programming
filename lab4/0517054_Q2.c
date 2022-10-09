#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int guess, ans = rand()%100, lowest = 0, highest = 100;
   // printf("%d\n", ans);
    
    while (guess != ans){
        printf("Guess: ");
        scanf("%d", &guess);
        if (0 < guess && guess < 100 && guess < ans){
            lowest = guess;
            printf("Range: %d - %d\n", lowest, highest);
        }
        else if (0 < guess && guess < 100 && guess > ans){
            highest = guess;
            printf("Range: %d - %d\n", lowest, highest);
        }
        else if (guess == ans)
            printf("You got it!\n");
        else
            printf("Out of range.\n");
    }
    
    return 0;
}
