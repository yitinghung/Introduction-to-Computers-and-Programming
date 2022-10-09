#include <stdio.h>
int max_sum(int len, int a[]){
    int max = 0, sum = 0;
    for (int i = 0; i < len; i++){
        sum += a[i];
        if (sum > max)
            max = sum;
        else if (sum < 0)
            sum = 0;
    }
    return max;
}

int main(){
    int M, N;
    scanf("%d", &M);
    for (int i = 0; i < M; i++){
        scanf("%d", &N);
        int a[N];
        for (int j = 0; j < N; j++)
            scanf("%d", &a[j]);
        printf("%d\n", max_sum(N, a));
    }
    return 0;
}
