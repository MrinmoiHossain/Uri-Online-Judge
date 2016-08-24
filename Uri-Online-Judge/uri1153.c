#include <stdio.h>

int main()
{
    int N, i, f;

    scanf("%d", &N);

    for(i = N - 1; i > 1; i--){
             f = N * i;
             N = f;
    }
    printf("%d\n", N);

    return 0;
}
