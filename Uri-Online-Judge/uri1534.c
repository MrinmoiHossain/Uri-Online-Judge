#include <stdio.h>

int main()
{
	int N, i, j;

	while(scanf("%d", &N) != EOF){
		int a = 0, b = (N - 1);

		for (i = 0; i < N; i++){
			for (j = 0; j < N; j++){
				if(j == b && i == a){
					printf("2");
				}
				else if (i == j){
					printf("1");
				}
				else{
					printf("3");
				}
			}
			a++;
			b--;
			printf("\n");
		}
	}

	return 0;
}
