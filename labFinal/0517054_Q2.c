#include <stdio.h>
#include <string.h>

int main(){
	int M, i, j;
	char N[10], next[10];;
	scanf("%d", &M);
	for (i = 0; i < M; i++){
		scanf("%s", N);
		strcpy(next, N);
		int year = 0;
		
		for (;;){
			int flag = 0;
			
			if (strlen(next) < 2)
				break;
		
			int count = 1;
			for (j = 0; j < strlen(next); j++){
				if (next[j] != '0')
					count *= next[j] - '0';
			}
			for (j = 0; count > 0; j++){
				next[j] = (count%10) + '0';
				count /= 10;
			}
			next[j] = '\0';
			
			year++;
		}
		
		
		printf("%d\n", year);
		
	}
	
	return 0;
}
