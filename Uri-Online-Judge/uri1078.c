#include <stdio.h>

int main()
{
    int N, i, b;

    scanf("%d", &N);

    if(N > 1 && N < 1000){
        for(i = 1; i <= 10; i++){
            b = i * N;
            printf("%d x %d = %d\n", i, N, b);
        }
    }
    return 0;
}
