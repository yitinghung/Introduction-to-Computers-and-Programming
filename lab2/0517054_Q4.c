#include <stdio.h>

int main(){
	printf("Size of int: %lu byte(s).\n", sizeof(int));
	printf("Size of long int: %lu byte(s).\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s).\n", sizeof(long long int));
	printf("Size of unsigned int: %lu byte(s).\n", sizeof(unsigned int));
	printf("Size of float: %lu byte(s).\n", sizeof(float));
	printf("Size of double: %lu byte(s).\n", sizeof(double));
	printf("Size of char: %lu byte(s).\n", sizeof(char));
	return 0;
}
