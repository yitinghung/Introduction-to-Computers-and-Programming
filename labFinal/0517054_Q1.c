#include <stdio.h>
#include <string.h>

int main(){
	int M, N, i, j, k;
	char str[200], result[200];
	scanf("%d", &M);
	for (i = 0; i < M; i++){
		scanf("%d", &N);
		scanf("%s", str);
		int count = 0;
		for(j = 0; j < strlen(str);){
			j += N;
			for (k = 1; k <= N; k++){
				result[count++] = str[j-k];
			}
		}
		result[count] = '\0';
		printf("%s\n", result);
	}
	return 0;
}
