#include <stdio.h>
int main(){
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    printf("%d\n", a[1]);
    printf("%d\n", a+1);
    printf("%d\n", *(a+1));
    printf("%d\n", &a[1][0]);
    printf("%d\n", *a[1]);
    printf("%d\n", *(a+1)+1);
    return 0;
}

