#include <stdio.h>

int main(){
	
    int array[10], i;
    for (i=0 ; i<10 ; i++)
        scanf("%d", &array[i]);
    
    for (i=0 ; i<10 ; i++)
        printf("%10d", array[i]);
    printf("\n");
    for (i=9 ; i>=0 ; i--)
        printf("%10d", array[i]);
    
    printf("\n");
	return 0;
}
