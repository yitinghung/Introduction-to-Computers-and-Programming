#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++){
        int cola;
        scanf("%d", &cola);
        if (cola == 0 || cola == 1)
            printf("%d\n", cola);
        else {
            int count = cola;
            while (cola / 3 >= 1){
                count += cola / 3;
                cola = cola / 3 + cola % 3;
            }
            if (cola == 2)
                printf("%d\n", count + 1);
            else if (cola == 0 || cola == 1)
                printf("%d\n", count);
        }
    }
    return 0;
}
