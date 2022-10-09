#include <stdio.h>

int Fibonacci_numbers(int n)
{
    int i, sum = 0;
    if (n == 0)
        return 0;
    else if (n == 1 )
        return 1;
    return(Fibonacci_numbers(n-2) + Fibonacci_numbers(n-1));
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", Fibonacci_numbers(n));
    return 0;
}
