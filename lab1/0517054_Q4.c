#include <stdio.h>

int main(){
	float A, B, division;
	printf("A = ");
	scanf("%d", &A);
	printf("B = ");
	scanf("%d", &B);
	division = A/B;
	printf("A / B = %.2f\n", division);
	return 0;
}
