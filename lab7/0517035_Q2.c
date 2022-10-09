#include<stdio.h>

int priority(char operator){
    switch(operator) {
        case '+': case '-': return 1;
        case '*': case '/': return 2;
        default:            return 0;
    }
}

void be_prefix(char *input, char *prefix){
    char stack[9] = {'0'};
    int i, j, top;
    for (i=8, j=0, top=0 ; input[i]!=0 ; i--){
        switch(input[i]){
            case'+':case'-':case'*':case'/':
                while (priority(stack[top])>priority(input[i])) {
                    prefix[j++] = stack[top--];
                }
                stack[++top] = input[i];
                break;
            default:
                prefix[j++] = input[i];
        }
    }
     while(top > 0) {
        prefix[j++] = stack[top--];
    }
}


int main(void){
    char input[9] = {'0'}, temp, prefix[9] = {'0'};
	int i;
	printf("Input : ");
	for (i=0;i<9;i++){
		scanf("%c", &input[i]);
	}
	
    be_prefix(input, prefix);
    
	
	for (i=8;i>=0;i--){
		printf("%c", prefix[i]);
	}
	printf("\n");
	return 0;
}
