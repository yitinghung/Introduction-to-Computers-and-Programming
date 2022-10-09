#include <stdio.h>
#define N 10000
int main(){
	while(1){
		int n, i, j, a[N];
		scanf("%d", &n);
		if (n==0)
			break;
		
		int time = 0;
		for	(i=n; i>1; i--){
			for (j=2; j<i; j++){
				if (i % j == 0)
					time += 1;
			}
			if (time == 0){
				printf("%d\n", i);
				break;
			}
			else
				time = 0;
		}
			
			
	}
	return 0;
}
