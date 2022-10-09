#include <stdio.h>

int main(){
	char i, j;
	printf("Input two characters: ");
	scanf("%c %c", &i, &j);
	printf("\'%c\': %d\n", i, i);
	printf("\'%c\': %d\n", j, j);
	return 0;
}
