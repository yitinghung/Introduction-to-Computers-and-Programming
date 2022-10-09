#include <stdio.h>

int max(int a, int b, int c, int d, int e)
{
    int i, j, temp;
    int x[5] = {a, b, c, d, e};
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

int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d\n",max(a, b, c, d, e));
    
    return 0;
}
