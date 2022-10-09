#include <stdio.h>
float average(int a[], int n){
    float sum= 0;
    for (int i=0; i<n; i++){
        sum += a[i];
    }
    return sum/n;
}

float min(int a[], int n){
    int min = a[0];
    for (int i=0; i<n; i++){
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

float max(int a[], int n){
    int max = a[0];
    for (int i=0; i<n; i++){
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

void sort(int a[], int n){
    int j, temp;
    for(int i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

float median(int a[], int n){
    float median;
    if (n % 2 == 0)
        median = (a[n/2-1] + a[n/2])/2.f;
    else
        median = a[(n-1)/2];
    return median;
}

int main(){
    while (1){
        int n;
        scanf("%d", &n);
        if(n == 0)
            break;
        int i, a[n];
        for (i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        sort(a, n);
        printf("%.2f %.2f %.2f %.2f\n", average(a, n), min(a, n), max(a, n), median(a, n));
    }
    
    return 0;
}
