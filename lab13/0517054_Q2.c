#include <stdio.h>
int main(){
    int M, N;
    scanf("%d", &M);
    for (int i = 0; i < M; i++){
        scanf("%d", &N);
        int a[N][4];
        for (int row = 0; row < N; row++){
            for (int col = 0; col < 4; col++){
                scanf("%d", &a[row][col]);
            }
        }
        int left = a[0][0], right = a[0][2], low = a[0][1], up = a[0][3], area;
        for (int j = 0; j < N; j++){
            if (a[j][0] > left)
                left = a[j][0];
            if (a[j][2] < right)
                right = a[j][2];
            if (a[j][1] > low)
                low = a[j][1];
            if (a[j][3] < up)
                up = a[j][3];
        }
        area = (right - left)*(up - low);
        printf("%d\n", area);
    }
    return 0;
}
