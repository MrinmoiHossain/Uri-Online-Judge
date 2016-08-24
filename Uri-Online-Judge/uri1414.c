#include <stdio.h>

int main()
{
    int T, N, i, sum, match;
    char team[15];

    while(scanf("%d %d", &T, &N) != 0){
        sum = 0;
        if(T == 0 && N == 0){
            break;
        }
        for(i = 0; i < T; i++){
            scanf("%s %d", &team, &match);

            sum = sum + match;
        }

        if(sum == N * 3){
            printf("0\n");
        }
        else{
            printf("%d\n", N * 3 - sum);
        }
    }

    return 0;
}
