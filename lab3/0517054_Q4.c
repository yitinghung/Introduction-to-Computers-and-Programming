#include <stdio.h>
int main(){
    int num_animal, num_leg;
    printf("Number of animals: ");
    scanf("%d", &num_animal);
    printf("Number of legs: ");
    scanf("%d", &num_leg);
    printf("Chicken: %d\n", (4 * num_animal - num_leg) / 2);
    printf("Rabbit: %d\n", (num_leg - 2 * num_animal) / 2);
    
    return 0;
}
