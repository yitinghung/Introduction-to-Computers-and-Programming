#include <stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	int a[n][n];
	
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	
	for (j=0; j<n; j++){
		for (i=n-1; i>=0; i--){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for (i=n-1; i>=0; i--){
		for(j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(j=0; j<n; j++){
		for(i=0; i<n; i++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
