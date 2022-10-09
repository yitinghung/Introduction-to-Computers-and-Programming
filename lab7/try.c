#include <stdio.h>
void max_min(int a[], int *max, int *min);

int main(){
    int i, a[5], big, small;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    max_min(a, &big, &small);
    printf("max: %d\nmin: %d\n", big, small);
    return 0;
}

void max_min(int a[], int *max, int *min){
    int i;
    *max = a[0], *min = a[0];
    //max = &a[0]; min = &a[0];
    for (i = 0; i < 5; i++){
        if (a[i] > *max)
            *max = a[i];
        else if (a[i] < *min)
            *min = a[i];
    }
    //printf("%d %d\n", *max, *min);
}
