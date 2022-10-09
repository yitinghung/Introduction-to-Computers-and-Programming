#include <stdio.h>
int main(){
	char a[5]= {'a', 'b', 'c', 'd', 'e'};
	printf("%d\n", a);
	printf("%d\n", a[0]);
	printf("%d\n", &(a[0]));
	printf("%d\n", *a);
	printf("%d\n", *(a+1));
	printf("%d\n", &*(a+1));
	printf("%d\n", *&*(a+1));
	printf("%d\n", &*&*(a+1));
	return 0;
}
