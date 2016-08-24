#include <stdio.h>

int main()
{
    int N, b, c, d = 0, e = 1;

    scanf("%d", &N);

    int T[N];
    for(b = 0; b < N; b++){
        scanf("%d", &T[b]);
    }
    c = T[d];

    for(d = 0; d < N; d++)
    {
        if(T[d] < c)
        {
            c = T[d];
            e = d + 1;
        }

    }
    printf("%d\n", e);

    return 0;
}
