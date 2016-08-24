#include <stdio.h>

int main()
{
    int T, i, N, j, age;

    scanf("%d", &T);

    for(i = 0; i < T; i++){
        scanf("%d", &N);

        for(j = 1; j <= N; j++){
            scanf("%d", &age);

            if(j == (N / 2 + 1)){
                printf("Case %d: %d\n", i+1, age);
            }
        }
    }

    return 0;
}
