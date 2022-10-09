#include <stdio.h>
int main(){
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	int a[n][m];
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	int time = 0;

	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			if (a[i][j] == 1)
				time += 1;
		}
		if (time == 0){
			for (j=0; j<m; j++)
			a[i][j] = '-';
		}	
		time = 0;
	}
	
	time = 0;
	for (j=0; j<m; j++){
		for (i=0; i<n; i++){
			if (a[i][j] == 1)
				time += 1;
		}
		if (time == 0){
			for (i=0; i<n; i++)
			a[i][j] = '|';
		}	
		time = 0;
	}
	
	time = 0;
	int k, max;
	if (n > m)
		max = n;
	else
		max = m;
		
		
	for (k=0; k<max; k++){
		for (i= 0; i<n; i++){
			if (a[i][k] == 1)
				time += 1;
		}
		for (j=0; j<m; j++){
			if(a[k][j] == 1)
				time += 1;
		}
		if (time == 0)
			a[k][k] = '+';
		time = 0;
	}


	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			if (a[i][j] == 45)
				printf("%c ", '-');
			else if (a[i][j] == 124)
				printf("%c ", '|');
			else if (a[i][j] == 43)
				printf("%c ", '+');
			else 
				printf("%c ", '#');
		}
		printf("\n");
	}
	return 0;
}
