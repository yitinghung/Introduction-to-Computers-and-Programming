#include <stdio.h>

int main(){
	
    char BOH;
    int d_number, x, bi[1000]={0}, o[1000]={0}, hex[1000]={0}, counter, flag=0, i;
    printf("Choose B, O, or H: ");
    scanf("%c", &BOH);
    printf("Input the decimal number: ");
    scanf("%d", &d_number);
    
    if (BOH == 'B'){
        
        for (counter=0 ; flag!=1 ; counter++){
            x = d_number % 2;
            bi[counter] = x;
            d_number /= 2;
            
            if (d_number==0)
                flag=1;
                
        }
        printf("The binary expression of the number is ");
        for (i=counter-1 ; i>=0 ; i--){
            printf("%d", bi[i]);
        }
        printf("\n");
        
    }
    return 0;
}
