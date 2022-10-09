#include <stdio.h>

int max(int x[])
{
    int i, j, temp;    
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    return x[4];
}

int main(void)
{
    int x[5], i;
    for (i = 0; i < 5; i++)
        scanf("%d", &x[i]);
    printf("%d\n", max(x));
    
    return 0;
}
