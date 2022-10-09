#include <stdio.h>

int main(){
	char i;
	printf("Input a lower case: ");
	scanf("%c", &i);
	i-=32;
	printf("Output an upper case: %c", i);
	return 0;
}
