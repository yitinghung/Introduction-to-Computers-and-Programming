#include <stdio.h>
int main(){
    int num, a, b, time, i, j;
    scanf("%d", &num);
    for (time = 0; time < num; time++){
        scanf("%d %d", &a, &b);
        int step = b - a, n = 0, count = 0;
        for (i = 1; i <= step; i++){
            for (j = 0; j < 2; j++){
                count += i;
                if (count >= step){
                    if (j == 0)
                        printf("%d\n", 2 * i - 1);
                    else if (j == 1)
                        printf("%d\n", 2 * i);
                    break;
                }
            }
            j = 0;
            if (count >= step)
                break;
        }
    }
        return 0;
}
