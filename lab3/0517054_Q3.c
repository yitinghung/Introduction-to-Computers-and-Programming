#include <stdio.h>
int main(){
    char type;
    float degree, Fahrenheit, Celsius;
    
    printf("Choose C or F: ");
    scanf("%c", &type);
    
    switch(type){
        case 'C':
            printf("Input the temperature: ");
            scanf("%f", &degree);
            Fahrenheit = (degree * (9.0f / 5.0f)) + 32;
            printf("Fahrenheit temperature is %.2f degree.\n", Fahrenheit);
            break;
        case 'F':
            printf("Input the temperature: ");
            scanf("%f", &degree);
            Celsius = (degree - 32 ) * 5.0f / 9.0f;
            printf("Celsius temperature is %.2f degree.\n", Celsius);
            break;
        default:
            break;
    
    }
    return 0;
}
