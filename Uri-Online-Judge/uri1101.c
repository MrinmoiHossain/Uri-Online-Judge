#include <stdio.h>

int main()
{
    int M, N, i, sum;

    while(M != 0 && N != 0){
        scanf("%d %d", &M, &N);

        if(M <= 0 || N <= 0){
            break;
        }

        if(M < N){
            sum = 0;
            for(i = M; i <= N; i++){
                printf("%d ", i);
                sum = sum + i;
            }
            printf("Sum=%d\n", sum);
        }
        else if(M > N){
            sum = 0;
            for(i = N; i <= M; i++){
                printf("%d ", i);
                sum = sum + i;
            }
            printf("Sum=%d\n", sum);
        }
        else if(M == N){
            sum = 0;
                printf("%d %d ", M, N);
                sum = M + N;
            printf("Sum=%d\n", sum);
        }
    }

    return 0;
}
