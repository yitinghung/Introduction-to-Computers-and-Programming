#include <stdio.h>
int main(){
    int num, N_M;
    scanf("%d", &num);
    for (int i = 0; i < num; i++){
        scanf("%d", &N_M);
        int N = N_M + 1;
        while(N - N / 10 <= N_M){
            if (N - N / 10 == N_M){
                printf("%d ", N);
            }
            N++;
        }
        printf("\n");
    }
    return 0;
}
