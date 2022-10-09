#include <stdio.h>
#include <math.h>

void calc(int n, float a[], float *mean, float *rmsd);

int main(){
	int n, i;
	scanf("%d", &n);
	
	float a[n];
	for (i=0; i<n; i++){
		scanf("%f", &a[i]);
	}
	
	float mean, rmsd;
	calc(n, a, &mean, &rmsd);
	printf("%.2f %.2f\n", mean, rmsd);
	
	return 0;
}

void calc(int n, float a[], float *mean, float *rmsd){
	float sum_a = 0, sum_b = 0;
	int i;
	for (i=0; i<n; i++){
		sum_a += a[i];
	}
	*mean = sum_a / n;
	
	for (i=0; i<n; i++){
		sum_b += pow(a[i], 2);
	}
	*rmsd = sqrt(sum_b / n);
}

