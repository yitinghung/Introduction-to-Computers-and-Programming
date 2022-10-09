#include <stdio.h>
#include <stdlib.h>
int find_largest(int a[], int n)
{
    int i, max;
    max = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    a[0] = 0;
    return max;
}
int main(){
    int num[10] = {1, 2, 3, 4, 5 ,2, 3, 5, 9 , 7};
    
    printf("%d %d\n", find_largest(num, 10), num[0]);
    return 0;
}
