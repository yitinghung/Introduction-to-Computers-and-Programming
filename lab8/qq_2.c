#include <stdio.h>
void print_int(int i)
{
    if (i < 0)
        return;
    printf("%d", i);
}

int main(void){
    int i = 0;
    print_int(i);
    return 0;
}
