#include <stdio.h>

int main()
{
    int N, num, count = 0, i, k;

    while(scanf("%d", &N) != EOF){
        num = 1;
        count++;
        num += (N * (N + 1)) /2;
        if(N == 0){
            printf("Caso %d: %d numero\n", count, num);
            printf("0\n");
        }
        else{
            printf("Caso %d: %d numeros\n", count, num);
            printf("0 ");
            for(i = 1; i <= N; i++){
                for(k = 1; k <= i; k++){
                    printf("%d", i);
                    if(i <= N){
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
    }

    return 0;
}
