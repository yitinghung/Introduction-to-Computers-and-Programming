#include <stdio.h>
int main(){
    int k, i = 1, sum = 0;
    printf("k = ");
    scanf("%d", &k);
    do {
        sum += i;
        i++;
    } while (sum < k);
    printf("n = %d\n", i - 1);
    return 0;
}

