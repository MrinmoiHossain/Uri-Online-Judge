#include <stdio.h>

int main()
{
    int N, i;
    long long int P, Q, j, k;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%lld %lld", &P, &Q);

        for(j = 0; j < P; j++){
            for(k = 0; k < Q; k++){
                if((j * j + k * k) == (P + Q)){
                    printf("Case %d:\n%lld %lld\n", i+1, j, k);
                }
                else if((j * j + k * k) != (P + Q)){
                    printf("Case %d:\nImpossible.\n", i+1);
                }
            }
        }
    }

    return 0;
}
