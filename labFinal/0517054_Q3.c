#include <stdio.h>
#include <string.h>

int main(){
	int M, i, j, count, flag;
	char input[200], judges[200];
	scanf("%d", &M);
	getchar();
	for (i = 0; i < M; i++){
		gets(input);
		gets(judges);
		if (strcmp(input, judges) == 0)
			printf("Correct\n");
		else {
			count = 0, flag = 0;
			for (j = 0; j < strlen(input); j++, count++){
				while (input[j] == ' ')
					j += 1;
				while (judges[count] == ' ')
					count += 1;
				if (input[j] != judges[count])
					flag = 1;
			}
			
			if (flag == 1)
				printf("Wrong Answer\n");
			else
				printf("Output format error\n");
		}
	}
	return 0;
}
