#include <stdio.h>

int main()
{
    int T, i;
    long long int N, j, X, a = 0, b = 1;

    scanf("%d", &T);

    for(i = 1; i <= T; i++){
        scanf("%lld", &N);
        N = N + 1;
        a = 0, b = 1;

        for(j = 0; j < N; j++){
            if(j <= 1){
                X = j;
            }
            else{
                X = a + b;
                a = b;
                b = X;
            }
        }
        printf("Fib(%lld) = %lld\n", N - 1, X);
    }


    return 0;
}
