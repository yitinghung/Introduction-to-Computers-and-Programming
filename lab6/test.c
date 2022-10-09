#include <stdio.h>

int main()
{
    int hex[1000], i = 0, j, n;
    scanf("%d", &n);
    while (n > 0)
    {
        hex[i] = n % 16;
        i += 1;
        n /= 16;
    }
    for (j = i; j >= 0; j--)
    {   if (hex[j] == 10)
            printf("A");
        else if (hex[j] == 11 )
            printf("B");
        else if (hex[j] == 12 )
            printf("C");
        else if (hex[j] == 13 )
            printf("D");
        else if (hex[j] == 14 )
            printf("E");
        else if (hex[j] == 15 )
            printf("F");
        else
            printf("%d", hex[j]);
    }
    
        
    return 0;
}

