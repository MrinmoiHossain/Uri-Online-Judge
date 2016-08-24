#include <stdio.h>

int main()
{
    long long int M, N, i;
    long long int x, y;

    while(scanf("%lld %lld", &M, &N) != EOF){
        if(M == 0 && N == 0){
            x = 1;
            y = 1;
        }
        else if(M > 0 && N == 0){
            for(i = M - 1; i >= 1; i--){
             x = M * i;
             M = x;
            }
            y = 1;
        }
        else if(M == 0 && N > 0){
            for(i = N - 1; i >= 1; i--){
             y = N * i;
             N = y;
            }
            x = 1;
        }
        else if(M > 0 && N > 0){
            for(i = M - 1; i >= 1; i--){
             x = M * i;
             M = x;
            }
            for(i = N - 1; i >= 1; i--){
             y = N * i;
             N = y;
            }
        }
        printf("%lld\n", x + y);
    }

    return 0;
}
