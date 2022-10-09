#include <stdio.h>

int main(){
	float i, j, sol;
	char k;
	printf("Expression: ");
	scanf("%f%c%f", &i, &k, &j);
	
	if (k == '+')
		sol = i + j;

	else if (k == '-')
		sol = i - j;
    
	else if (k == '*')
		sol = i * j;

	else
		sol = i / j;
	
	printf("%.2f %c %.2f = %.2f.", i, k, j, sol);
	return 0;
}
