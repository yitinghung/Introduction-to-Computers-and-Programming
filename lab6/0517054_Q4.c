#include <stdio.h>

void fun(int n)
{
    int remainder;
    if (n > 0)
    {
        remainder = n % 16;
        n /= 16;
        fun(n);
        if (remainder == 10)
            printf("A");
        else if (remainder == 11 )
            printf("B");
        else if (remainder == 12 )
            printf("C");
        else if (remainder == 13 )
            printf("D");
        else if (remainder == 14 )
            printf("E");
        else if (remainder == 15 )
            printf("F");
        else
            printf("%d",remainder);
    }
}


int main(void)
{
    int n;
    scanf("%d", &n);
    fun(n);
    printf("\n");
    return 0;
}
