#include <stdio.h>

int main()
{
    long long int N, P;
    int L;

    scanf("%lld %d", &N, &L);

    if(N >= 3 && N <= 1000000 && L >= 1 && L <= 4000){
        P = N * L;
        printf("%lld\n", P);
    }

    else if(N < 3 && N > 1000000 || L < 1 && L > 4000){

    }



    return 0;
}
