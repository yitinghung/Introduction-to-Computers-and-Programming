#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int *array, int front, int end){
    int pivot = array[end];
    int i = front - 1, j;
    for (j = front; j < end; j++){
        if (array[j] < pivot){
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i+1], &array[end]);
    return i+1;
}

void QuickSort(int *array, int front, int end){
    if (front < end){
        int pivot = Partition(array, front, end);
        QuickSort(array, front, pivot-1);
        QuickSort(array, pivot+1, end);
    }
}

int main(){
    while(1){
        int num;
        scanf("%d", &num);
        int a[num], i;
        if (num == 0)
            break;
        for (i = 0; i < num; i++)
            scanf("%d", &a[i]);
        QuickSort(a, 0, num - 1);
        for (i = 0; i < num; i++)
            printf("%d ", a[i]);
        printf("\n");
        
    }
    return 0;
}
