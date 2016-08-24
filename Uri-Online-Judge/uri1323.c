#include <stdio.h>

int main()
{
    int N, i, sum = 0;

    do{
        scanf("%d", &N);

        if(N == 0){
            return 0;
        }

        for(i = 1; i <= N; i++){
            sum = sum + (i * i);
        }

        printf("%d\n", sum);
        sum = 0;
    }
    while(N != 0);

    return 0;
}
