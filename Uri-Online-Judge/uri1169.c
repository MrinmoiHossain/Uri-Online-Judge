#include <stdio.h>
#include <math.h>

int main()
{
    int N, i, X;
    long long int q;

    scanf("%d", &N);

    for(i = 0 ; i < N; i++){
        scanf("%d", &X);

        q = pow(2,X) / 12000;

        printf("%lld kg\n", q);
    }
    return 0;
}
