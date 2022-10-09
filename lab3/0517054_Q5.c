#include <stdio.h>
int main(){
    float i, j, sol;
    char k;
    printf("Expression: ");
    scanf("%f%c%f", &i, &k, &j);
    while(i != 0 || j !=0 || k != '/'){
        if (k == '+'){
            sol = i + j;
            printf("%.2f %c %.2f = %.2f\n", i, k, j, sol);
            break;
            }
        else if (k == '-'){
            sol = i - j;
            printf("%.2f %c %.2f = %.2f\n", i, k, j, sol);
            break;
            }
        else if (k == '*'){
            sol = i * j;
            printf("%.2f %c %.2f = %.2f\n", i, k, j, sol);
            break;
            }
        
        else if (k == '/'){
            sol = i / j;
            printf("%.2f %c %.2f = %.2f\n", i, k, j, sol);
            break;
            }
    }
    return 0;
}
