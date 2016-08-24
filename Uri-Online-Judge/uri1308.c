#include <stdio.h>
#include <math.h>

int main()
{
    long double T, i, N, m;

    scanf("%Lf", &T);

    for(i = 0; i < T; i++){
        scanf("%Lf", &N);

        m = (sqrt(1 + 8 * N) - 1) / 2;

        printf("%d\n", (int)m);
    }

    return 0;
}
