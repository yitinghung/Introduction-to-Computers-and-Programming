#include <stdio.h>

int main(){
	int i;
	printf("Input: ");
	scanf("%d", &i);
	if (i<-1000 || i>1000)
		printf("Invalid value.");
	
	else
		printf("Input accepted.");
	
	return 0;
}
