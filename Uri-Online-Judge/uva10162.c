#include <stdio.h>
#include <math.h>

int main()
{
    int N, sum = 0, i;

    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        sum = sum + pow(i, i);
    }

    printf("%d\n", sum);

    return 0;
}
