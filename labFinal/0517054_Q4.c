#include <stdio.h>

int main(){
	int M, N, P, i, num[20], j, flag, count;
	scanf("%d", &M);
	while(M--){
		scanf("%d %d", &N, &P);
		for (i = 0; i < N; i++)
			num[i] = i + 1;
			
		flag = 0;
		j = 0;
		
		for (; flag < N - 1;){
			
			count = 0;
			while (num[j] != 0){
				count++;
				if (count = 2)
					break;
				j++;
				if (j >= N)
					j -= N;
			}
			
			if (j >= N)
				j -= N;
				
			num[j++] = 0;
			flag++;
		}
		
		
		for (i = 0; i < N; i++){
			if (num[i] != 0){
				printf("%d\n", num[i]);
				break;
			}
		}
	
	}
	return 0;
}
