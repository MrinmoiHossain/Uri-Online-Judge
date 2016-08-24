#include <stdio.h>
#include <math.h>

int main()
{
    int N, C, i, j, S = 0;

    scanf("%d", &C);

    for(j = 0; j < C; j++){
        scanf("%d", &N);
        S = 0;
        for(i = 0; i < N; i++){
            S = S + pow(-1,i);
        }
    printf("%d\n", S);
    }

    return 0;
}
