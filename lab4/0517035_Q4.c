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
    
    else if (BOH == 'O'){
        for (counter=0 ; flag!=1 ; counter++){
            x = d_number % 8;
            o[counter] = x;
            d_number /= 8;
            
            if (d_number==0)
                flag=1;
                
        }
        printf("The octal expression of the number is ");
        for (i=counter-1 ; i>=0 ; i--){
            printf("%d", o[i]);
        }
        printf("\n");
    }
        
    else if (BOH == 'H'){
        for (counter=0 ; flag!=1 ; counter++){
            x = d_number % 16;
            hex[counter] = x;
            d_number /= 16;
            if (d_number==0)
                flag=1;
                
        }
        printf("The hexadecimal expression of the number is ");
        for (i=counter-1 ; i>=0 ; i--){
            if (hex[i]==10){
                hex[i] = 'A';
                printf("%c", hex[i]);
            }
            else if (hex[i]==11){
                hex[i] = 'B';
                printf("%c", hex[i]);
            }
            else if (hex[i]==12){
                hex[i] = 'C';
                printf("%c", hex[i]);
            }
            else if (hex[i]==13){
                hex[i] = 'D';
                printf("%c", hex[i]);
            }
            else if (hex[i]==14){
                hex[i] = 'E';
                printf("%c", hex[i]);
            }
            else if (hex[i]==15){
                hex[i] = 'F';
                printf("%c", hex[i]);
            }
            else if (hex[i]==16){
                hex[i] = 'G';
                printf("%c", hex[i]);
            }
            else
                printf("%d", hex[i]);
        }
        printf("\n");
            
    }
	return 0;
}
