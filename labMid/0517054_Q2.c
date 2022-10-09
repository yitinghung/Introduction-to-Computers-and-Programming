#include <stdio.h>
int BSK(int i, int j){
	if (i==0 && j==0)
		return 1;
	else if (j == 0) 
		return 1;
	else if (j == i)
		return 1;
	
	return (BSK(i-1, j-1) + BSK(i-1, j));
}

int main(){
	while(1){
		int i, j;
		scanf("%d", &i);
		if (i == -1)
			break;
		scanf("%d", &j);
		printf("%d\n", BSK(i, j));
	
	}
	return 0;
}
