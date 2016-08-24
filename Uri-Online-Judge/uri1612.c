#include <stdio.h>
#include <math.h>

int main()
{
    int T, i, N, m;

    scanf("%d", &T);

    for(i = 0; i < T; i++){
        scanf("%d", &N);

        m = ceil(N/2.0);

        printf("%d\n", m);
    }

    return 0;
}
