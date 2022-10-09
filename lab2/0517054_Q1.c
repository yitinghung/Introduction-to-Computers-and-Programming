#include <stdio.h>

int main(){
	int i = 5, j = 256;
	printf("Sample for %%2d:\n");
	printf("%2d\n", i);
	printf("%2d\n", j);
	printf("Sample for %%3d:\n");
	printf("%3d\n", i);
	printf("%3d\n", j);
	printf("Sample for %%.6d:\n");
	printf("%.6d\n", i);
	printf("%.6\n", j);
	printf("Sample for %%8.6d:\n");
	printf("%8.6d\n", i);
	printf("%8.6d\n", j);
	printf("Sample for %%08d:\n");
	printf("%08d\n", i);
	printf("%08d\n", j);
	return 0;
}
